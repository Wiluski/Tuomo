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
        motor_turn(max,0,1);
        
        
    }

    else if (( r1<threshold.r1-8000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(0,max,1);
    }    
    
    else if (( l1<threshold.l1-6500&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,50,1);
        
        
    }

    else if (( r1<threshold.r1-6500 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(50,max,1);
    }        
//    
//    else if (( l1<threshold.l1-5000&&r1>threshold.r1)) //oikealle
//    {
//        dir = 1;
//        motor_turn(max,75,1);
//        
//        
//    }
//
//    else if (( r1<threshold.r1-5000 && l1>threshold.l1)) //vasempaan
//    {
//        dir = 0;
//        motor_turn(75,max,1);
//    }   
//    
    else if (( l1<threshold.l1-4000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,100,1);
        
        
    }

    else if (( r1<threshold.r1-4000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(100,max,1);
    }        
//    
    else if (( l1<threshold.l1-2000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,150,1);
        
        
    }

    else if (( r1<threshold.r1-2000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(150,max,1);
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
    
    
    else if (( l1<threshold.l1-1000&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,180,1);
        
        
    }

    else if (( r1<threshold.r1-1000 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(180,max,1);
    }        
  
    else if (( l1<threshold.l1-200&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,200,1);
        
        
    }

    else if (( r1<threshold.r1-200 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(200,max,1);
    }        
 
    
    
    else if (( l1<threshold.l1&&r1>threshold.r1)) //oikealle
    {
        dir = 1;
        motor_turn(max,225,1);
        
        
    }

    else if (( r1<threshold.r1 && l1>threshold.l1)) //vasempaan
    {
        dir = 0;
        motor_turn(225,max,1);
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