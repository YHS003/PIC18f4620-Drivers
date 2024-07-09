/* 
 * File:   ecu_push_button.c
 * Author: Yehya.H.Shehata
 *
 * Created on June 30, 2024, 5:39 PM
 */

#include "ecu_push_button.h"

/**
 * @brief Initialize the assigned pin to be Input.
 * @param btn pointer to the button configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType button_initialize(const button_t * const btn)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == btn) || 
      ((PORT_PIN_MAX_NUMBER - 1) < btn->button_pin.pin) || 
      ((PORT_MAX_NUMBER - 1) < btn->button_pin.port))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_direction_intialize(&(btn->button_pin));
    }
    
    return return_value;
}

/**
 * @brief Read the state of the button
 * @param btn pointer to the button configurations
 * @param btn_state button state @ref button_state_t
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType button_read_state(const button_t * const btn, button_state_t * const btn_state)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == btn) || (NULL == btn_state) || 
      ((PORT_PIN_MAX_NUMBER - 1) < btn->button_pin.pin) || 
      ((PORT_MAX_NUMBER - 1) < btn->button_pin.port))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        logic_t btn_logic_state;
        
        return_value = gpio_pin_read_logic(&(btn->button_pin), &btn_logic_state);
        
        switch(btn->button_connection)
        {
            case BUTTON_ACTIVE_HIGH :
                
                if(HIGH == btn_logic_state)
                {
                    *btn_state = BUTTON_PRESSED;
                }
                else
                {
                    *btn_state = BUTTON_NOT_PRESSED;
                }
                
                break;
                
            case BUTTON_ACTIVE_LOW :
                
                if(LOW == btn_logic_state)
                {
                    *btn_state = BUTTON_PRESSED;
                }
                else
                {
                    *btn_state = BUTTON_NOT_PRESSED;
                }
                
                break;
                
            default :
                return_value = E_NOT_OK;
                break;
        }
        
    }
    
    return return_value;
}