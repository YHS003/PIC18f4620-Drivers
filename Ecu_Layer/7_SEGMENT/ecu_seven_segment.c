/* 
 * File:   ecu_seven_segment_cfg.h
 * Author: Yehya.H.Shehata
 *
 * Created on July 19, 2024, 4:38 PM
 */

#include "ecu_seven_segment.h"

#define ONE_BIT_MASK    0x01

/* Section : Functions Declarations */

/**
 * This Interface to make the needed GPIO and segment initialization
 * @param seg pointer to the segment configurations 
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType seven_segement_intialize(const segment_t *seg)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == seg) || ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN0].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN0].port)) ||
      ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN1].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN1].port)) ||
      ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN2].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN2].port)) ||
      ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN3].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN3].port)))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        for(uint8 pins = 0; pins < 4; pins++)
        {
            return_value = gpio_pin_intialize(&(seg->segment_pins[pins]));
        }
    }
    
    return return_value;
}

/**
 * Write a number to the segment 0 ~ 9
 * @param seg pointer to the segment configurations 
 * @param number the needed number to show
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType seven_segement_write_number(const segment_t *seg, uint8 number)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == seg) || ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN0].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN0].port)) ||
      ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN1].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN1].port)) ||
      ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN2].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN2].port)) ||
      ((PORT_PIN_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN3].pin)) ||
      ((PORT_MAX_NUMBER - 1) < (seg->segment_pins[SEGEMENT_PIN3].port)))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        for(uint8 pins = 0; pins < 4; pins++)
        {
            return_value = gpio_pin_write_logic(&(seg->segment_pins[pins]), ((number >> pins) & ONE_BIT_MASK));
        }
    }
    
    return return_value;
}