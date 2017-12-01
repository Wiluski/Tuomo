/**
 * @file    Drive.c
 * @brief   ASDF Written by me AKA VE's
 * @details included in Zumo shield
*/
#include "Drive.h"
#include "Motor.h"
#include "Reflectance.h"
int dir;

int max=255;
double mKorjaus=1.0f; //<1
double korjaus=1.0f;
int laskuRaja=75;  //0-255

int sharp; 
int fuckup;

void Drive (int l3, int l1, int r1, int r3, int lVal, int rVal)
{

    if(l1<1000)
    {
        l1=lVal;
    }
    if(r1<1000)
    {
        r1=rVal;   
    }
    
    float leftR=(float)(r1-rVal)/(l1-lVal);
    float rightR= (float)(l1-lVal)/(r1-rVal);
    
    int leftM=(float)leftR*max*mKorjaus;
    int righhM=(float)rightR*max*mKorjaus;
    
    if((float)(leftM+righhM)/max/mKorjaus/2>0.80)
    {
        BatteryLed_Write(1);
        motor_forward(max,1);
    }
    
    if ((float)righhM>laskuRaja&&(float)leftM>laskuRaja)
    {
        BatteryLed_Write(0);
        sharp=10;
        fuckup=0;
//        motor_turn(leftM,righhM,1);
        if(leftM>righhM)
        {
            motor_turn(max,righhM,1);
            
            dir=1;  //=oikealle   

        }
        else
        {
            motor_turn(leftM,max,1);
            
            dir=0;  //=vasemmalle
        }
        
    }
    
    
    else 
    {
    //BatteryLed_Write(1);
    
        if(dir==1)
        {
            motor_sharp_turn(0,1,max,sharp,1);
        }
        if(dir==0)
        {
            motor_sharp_turn(1,0,sharp,max,1);
        }
    fuckup++;
    if(fuckup>=10)
        {
            sharp+=10;
            fuckup=0;
            if(sharp>200)
            {
                sharp=255;
            }
        }    
    }
    
}