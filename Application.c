/* 
 * File:   Application.c
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 8:44 PM
 */

#include "Application.h"
#include "Ecu_Layer/PUSH_BUTTON/ecu_push_button.h"

Std_ReturnType btn1_ret, btn2_ret;

button_state_t btn1_state = BUTTON_NOT_PRESSED;
button_state_t btn2_state = BUTTON_NOT_PRESSED;

button_t btn1 = 
{
    .button_connection = BUTTON_ACTIVE_HIGH,
    .button_state = BUTTON_NOT_PRESSED,
    .button_pin.direction = INPUT,
    .button_pin.logic = LOW,
    .button_pin.pin = PIN0,
    .button_pin.port = PORTD_INDEX
};

button_t btn2 = 
{
    .button_connection = BUTTON_ACTIVE_LOW,
    .button_state = BUTTON_NOT_PRESSED,
    .button_pin.direction = INPUT,
    .button_pin.logic = LOW,
    .button_pin.pin = PIN1,
    .button_pin.port = PORTD_INDEX
};

int main() 
{
    btn1_ret = button_initialize(&btn1);
    btn2_ret = button_initialize(&btn2);
    
    while(1)
    {
        btn1_ret = button_read_state(&btn1, &btn1_state);
        btn2_ret = button_read_state(&btn2, &btn2_state);
    }
    
    return (EXIT_SUCCESS);
}