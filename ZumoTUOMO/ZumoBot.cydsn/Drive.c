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
double korjaus=1.0f;

void Drive (int l3, int l1, int r1, int r3, int lVal, int rVal)
{

    
    int leftM=((float)(r1-rVal)/(23999-rVal))*max*korjaus;
    int righhM=((float)(l1-lVal)/(23999-lVal))*max*korjaus;
    
    
//    if (l3>threshold.l3&&r3>threshold.r3)
//    {
//        motor_backward(0,1);
//    }
    
//    if (r1>threshold.r1 && l1>threshold.l1)
//    {
//        motor_forward(0,1);
//        dir= 2;
//    }
//
    if (l1>threshold.l1||r1>threshold.r1)
    {
//        motor_turn(leftM,righhM,1);
        if(leftM<righhM)
        {
            motor_turn(leftM,max,1);
            dir=0;
        }
        else
        {
            motor_turn(max,righhM,1);
            dir=1;
        }
    }
    
    
//    else if (( l1<threshold.l1-9600 &&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,0,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-9600 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(0,max,1);
//    }    
//    
//    
//    else if (( l1<threshold.l1-8400 &&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.10,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-8400 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.10,max,1);
//    }    
//    
//    else if (( l1<threshold.l1-7200&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.30,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-7200 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.30,max,1);
//    }        
//    
//    else if (( l1<threshold.l1-6000&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.40,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-6000 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.40,max,1);
//    }   
//    
//    else if (( l1<threshold.l1-4800&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.50,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-4800 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.50,max,1);
//    }        
////    
//    else if (( l1<threshold.l1-3600&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.60,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-3600 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.60,max,1);
//        }        
//    
//    
//    else if (( l1<threshold.l1-2400&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.70,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-2400 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.70,max,1);
//    }        
//  
//    else if (( l1<threshold.l1-1200&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.80,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-1200 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.80,max,1);
//    }        
// 
//    
//    
//    else if (( l1<threshold.l1&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,max*0.90,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(max*0.90,max,1);
//    }    
    
   
    
    else 
    {
        if(dir==1)
        {
            motor_sharp_turn(0,1,max,100,1);
        }
        if(dir==0)
        {
            motor_sharp_turn(1,0,100,max,1);
        }
    }
    
}