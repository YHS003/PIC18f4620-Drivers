/* 
 * File:   ecu_led.c
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 8:44 PM
 */

#include "ecu_led.h"

/**
 * @brief Initialize the assigned pin to be OUTPUT and turn the led OFF or ON.
 * @param led : pointer to the led module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_initialize(const led_t * const led)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == led) || ((PORT_MAX_NUMBER - 1) < led->port) || ((PORT_PIN_MAX_NUMBER - 1) < led->pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_intialize(led);
    }
    
    return return_value;
}

/**
 * @brief Turn the led on
 * @param led : pointer to the led module configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_turn_on(const led_t * const led)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == led) || ((PORT_MAX_NUMBER - 1) < led->port) || ((PORT_PIN_MAX_NUMBER - 1) < led->pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_write_logic(led, LED_ON);
    }
    
    return return_value;
}

/**
 * @brief Turn the led off
 * @param led : pointer to the led module configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_turn_off(const led_t * const led)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == led) || ((PORT_MAX_NUMBER - 1) < led->port) || ((PORT_PIN_MAX_NUMBER - 1) < led->pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_write_logic(led, LED_OFF);
    }
    
    return return_value;
}

/**
 * @brief Toggle the led
 * @param led : pointer to the led module configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_toggle(const led_t * const led)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == led) || ((PORT_MAX_NUMBER - 1) < led->port) || ((PORT_PIN_MAX_NUMBER - 1) < led->pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_toggle_logic(led);
    }
    
    return return_value;    
}