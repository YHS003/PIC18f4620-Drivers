/* 
 * File:   Application.c
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 8:44 PM
 */

#include "Application.h"

pin_config_t LEDs[8];

Std_ReturnType ret_val;

int main() {

    for(uint8 index = 0; index < 8; index++)
    {
        LEDs[index].port = PORTC_INDEX;
        LEDs[index].direction = OUTPUT;
        LEDs[index].logic = LOW;
        LEDs[index].pin = index;
    }
    
    ret_val = gpio_port_direction_intialize(PORTC_INDEX, 0x00);
    ret_val = gpio_port_write_logic(PORTC_INDEX, 0xFF);
    
    __delay_ms(5000);
    
    while(1)
    {
        for(sint8 index = 3; index >= 0; index--)
        {
            ret_val = gpio_pin_write_logic(&LEDs[index], LOW);
            ret_val = gpio_pin_write_logic(&LEDs[7 - index], LOW);
            __delay_ms(500);
        }
        
        for(uint8 index = 0; index < 4; index++)
        {
            ret_val = gpio_pin_write_logic(&LEDs[index], HIGH);
            ret_val = gpio_pin_write_logic(&LEDs[7 - index], HIGH);
            __delay_ms(500);
        }
    }
    
    return (EXIT_SUCCESS);
}