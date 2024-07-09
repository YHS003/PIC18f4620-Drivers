/* 
 * File:   ecu_push_button.h
 * Author: Yehya.H.Shehata
 *
 * Created on June 30, 2024, 5:39 PM
 */

#ifndef ECU_PUSH_BUTTON_H
#define	ECU_PUSH_BUTTON_H

/* Section : Includes */
#include "../../Mcal_Layer/GPIO/hal_gpio.h"
#include "ecu_push_button_cfg.h"

/* Section : Macro Declarations */

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */
typedef enum{
    BUTTON_PRESSED = 0,
    BUTTON_NOT_PRESSED
}button_state_t;

typedef enum{
    BUTTON_ACTIVE_HIGH = 0,
    BUTTON_ACTIVE_LOW
}button_active_t;

typedef struct{
    pin_config_t button_pin;
    button_state_t button_state;
    button_active_t button_connection;
}button_t;

/* Section : Functions Declarations */
/**
 * @brief Initialize the assigned pin to be Input.
 * @param btn pointer to the button configurations
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType button_initialize(const button_t * const btn);

/**
 * @brief Read the state of the button
 * @param btn pointer to the button configurations
 * @param btn_state button state @ref button_state_t
 * @return  Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType button_read_state(const button_t * const btn, button_state_t * const btn_state);

#endif	/* ECU_PUSH_BUTTON_H */

