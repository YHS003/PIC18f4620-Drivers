/* 
 * File:   ecu_relay.c
 * Author: Yehya.H.Shehata
 *
 * Created on July 1, 2024, 1:41 PM
 */

#include "ecu_relay.h"

/**
 * @brief Initialize the assigned pin to be OUTPUT and turn the relay OFF or ON.
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_initialize(const relay_t * const relay)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == relay) || 
      ((PORT_PIN_MAX_NUMBER - 1) < relay->pin) ||
      ((PORT_MAX_NUMBER - 1) < relay->port))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        pin_config_t relay_module = {
            .pin = relay->pin,
            .port = relay->port,
            .direction = OUTPUT,
            .logic = relay->status
        };
        
        return_value = gpio_pin_intialize(&relay_module);
    }
    
    return return_value;
}

/**
 * @brief Turn the relay on
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_turn_on(const relay_t *const relay)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == relay) || 
      ((PORT_PIN_MAX_NUMBER - 1) < relay->pin) ||
      ((PORT_MAX_NUMBER - 1) < relay->port))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        pin_config_t relay_module = {
            .pin = relay->pin,
            .port = relay->port,
            .direction = OUTPUT,
            .logic = relay->status
        };
        
        return_value = gpio_pin_write_logic(&relay_module, RELAY_ON);
    }
    
    return return_value;
}

/**
 * @brief Turn the relay off
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_turn_off(const relay_t * const relay)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == relay) || 
      ((PORT_PIN_MAX_NUMBER - 1) < relay->pin) ||
      ((PORT_MAX_NUMBER - 1) < relay->port))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        pin_config_t relay_module = {
            .pin = relay->pin,
            .port = relay->port,
            .direction = OUTPUT,
            .logic = relay->status
        };
        
        return_value = gpio_pin_write_logic(&relay_module, RELAY_OFF);
    }
    
    return return_value;
}

/**
 * @brief Toggle the relay
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_toggle(const relay_t * const relay)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == relay) || 
      ((PORT_PIN_MAX_NUMBER - 1) < relay->pin) ||
      ((PORT_MAX_NUMBER - 1) < relay->port))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        pin_config_t relay_module = {
            .pin = relay->pin,
            .port = relay->port,
            .direction = OUTPUT,
            .logic = relay->status
        };
        
        return_value = gpio_pin_toggle_logic(&relay_module);
    }
    
    return return_value;
}