/* 
 * File:   ecu_dc_motor.h
 * Author: Yehya.H.Shehata
 *
 * Created on July 9, 2024, 1:45 PM
 */

#include "ecu_dc_motor.h"

/**
 * @brief Initialize the assigned pins to be OUTPUT and turn the motor OFF or ON.
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_initialize(const dc_motor_t * const dc_motor)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == dc_motor) || 
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].port) ||
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].port) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].pin) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_intialize(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_1]));
        return_value = gpio_pin_intialize(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_2]));
    }
    
    return return_value;
}

/**
 * @brief Move the motor to the right direction
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_move_right(const dc_motor_t * const dc_motor)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == dc_motor) || 
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].port) ||
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].port) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].pin) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_write_logic(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_1]), DC_MOTOR_ON);
        return_value = gpio_pin_write_logic(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_2]), DC_MOTOR_OFF);
    }
    
    return return_value;
}

/**
 * @brief Move the motor to the left direction
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_move_left(const dc_motor_t * const dc_motor)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == dc_motor) || 
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].port) ||
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].port) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].pin) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_write_logic(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_1]), DC_MOTOR_OFF);
        return_value = gpio_pin_write_logic(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_2]), DC_MOTOR_ON);
    }
    
    return return_value;
}

/**
 * @brief stop the motor movement
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_stop(const dc_motor_t * const dc_motor)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == dc_motor) || 
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].port) ||
       ((PORT_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].port) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_1].pin) ||
       ((PORT_PIN_MAX_NUMBER - 1) < dc_motor->dc_motor_pins[DC_MOTOR_PIN_2].pin))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_write_logic(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_1]), DC_MOTOR_OFF);
        return_value = gpio_pin_write_logic(&(dc_motor->dc_motor_pins[DC_MOTOR_PIN_2]), DC_MOTOR_OFF);
    }
    
    return return_value;
}