/* 
 * File:   Application.c
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 8:44 PM
 */

#include "Application.h"

#define LEDsNum 8

led_t LEDs[LEDsNum];
Std_ReturnType ret_val = E_OK;

int main() 
{
    for(uint8 index = 0; index < LEDsNum; index++)
    {
        LEDs[index].direction = OUTPUT;
        LEDs[index].logic = LOW;
        LEDs[index].pin = index;
        LEDs[index].port = PORTC_INDEX;
        
        led_initialize(&LEDs[index]);
    }
    
    while(1)
    {
        for(uint8 index = 0; index < LEDsNum; index++)
        {
            ret_val = led_toggle(&LEDs[index]);
            __delay_ms(250);
        }
    }
    
    return (EXIT_SUCCESS);
}