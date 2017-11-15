/**
 * @file    Drive.c
 * @brief   ASDF Written by me AKA VE's
 * @details included in Zumo shield
*/
#include "Drive.h"
#include "Motor.h"
int dir;

void Drive (int l3, int l1, int r1, int r3)
{
    if (r1>12000 && l1>12000)
    {
        motor_forward(90,1);
        dir= 2;
    }
    else if (( l1<12000&&r1>12000)||dir==1)
    {
        dir = 1;
        motor_turn(150,0,1);
        
        
    }
    else if (( r1<12000 && l1>12000)||dir==0)
    {
        dir = 0;
        motor_turn(0,150,1);
    }

    else if (l3>20000&&r3>20000)
    {motor_backward(0,1);
    }
}