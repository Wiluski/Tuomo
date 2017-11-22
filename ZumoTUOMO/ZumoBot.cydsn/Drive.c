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


void Drive (int l3, int l1, int r1, int r3)
{

    
//    if (l3>threshold.l3&&r3>threshold.r3)
//    {
//        motor_backward(0,1);
//    }
    
    if (r1>threshold.r1 && l1>threshold.l1)
    {
        motor_forward(max,1);
        dir= 2;
    }

    else if (( l1<threshold.l1-8000 &&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.10,1);
        
        
    }

    else if (( r1<threshold.r1-8000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.10,max,1);
    }    
    
    else if (( l1<threshold.l1-7000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.30,1);
        
        
    }

    else if (( r1<threshold.r1-7000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.30,max,1);
    }        
    
    else if (( l1<threshold.l1-6000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.40,1);
        
        
    }

    else if (( r1<threshold.r1-6000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.40,max,1);
    }   
    
    else if (( l1<threshold.l1-5000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.50,1);
        
        
    }

    else if (( r1<threshold.r1-5000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.50,max,1);
    }        
//    
    else if (( l1<threshold.l1-4000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.60,1);
        
        
    }

    else if (( r1<threshold.r1-4000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.60,max,1);
        }     
//
//    else if (( l1<threshold.l1-1000&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,150,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-1000 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(150,max,1);
//    }        
    
    
    else if (( l1<threshold.l1-3000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.70,1);
        
        
    }

    else if (( r1<threshold.r1-3000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.70,max,1);
    }        
  
    else if (( l1<threshold.l1-2000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.80,1);
        
        
    }

    else if (( r1<threshold.r1-2000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.80,max,1);
    }        
 
    
    
    else if (( l1<threshold.l1&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,max*0.90,1);
        
        
    }

    else if (( r1<threshold.r1 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(max*0.90,max,1);
    }    
    
   
    
    else 
    {
        if(dir==1)
        {
            motor_sharp_turn(0,1,200,100,1);
        }
        if(dir==0)
        {
            motor_sharp_turn(1,0,100,200,1);
        }
    }
    
}