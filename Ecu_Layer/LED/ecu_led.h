/* 
 * File:   ecu_led.h
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 9:49 PM
 */

#ifndef ECU_LED_H
#define	ECU_LED_H

/* Section : Includes */
#include "../../Mcal_Layer/GPIO/hal_gpio.h"
#include "ecu_led_cfg.h"

/* Section : Macro Declarations */

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */
typedef enum{
    LED_OFF,
    LED_ON
}led_status_t;

typedef struct{
    uint8 port          : 3;
    uint8 pin           : 3;     
    uint8 direction     : 1;     
    uint8 logic         : 1;
}led_t;

/* Section : Functions Declarations */

/**
 * @brief Initialize the assigned pin to be OUTPUT and turn the led OFF or ON.
 * @param led : pointer to the led module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_initialize(const led_t * const led);

/**
 * @brief Turn the led on
 * @param led : pointer to the led module configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_turn_on(const led_t * const led);

/**
 * @brief Turn the led off
 * @param led : pointer to the led module configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_turn_off(const led_t * const led);

/**
 * @brief Toggle the led
 * @param led : pointer to the led module configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType led_toggle(const led_t * const led);

#endif	/* ECU_LED_H */

