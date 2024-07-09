/* 
 * File:   ecu_relay.h
 * Author: Yehya.H.Shehata
 *
 * Created on July 1, 2024, 1:41 PM
 */

#ifndef ECU_RELAY_H
#define	ECU_RELAY_H

/* Section : Includes */
#include "ecu_relay_cfg.h"
#include "../../Mcal_Layer/GPIO/hal_gpio.h"

/* Section : Macro Declarations */

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */
typedef enum{
    RELAY_OFF = 0,
    RELAY_ON
}relay_status_t;

typedef struct{
    uint8 port            : 3;
    uint8 pin             : 3;
    uint8 status          : 1;
    uint8 reserved        : 1; /* For Future Updates */
}relay_t;

/* Section : Functions Declarations */

/**
 * @brief Initialize the assigned pin to be OUTPUT and turn the relay OFF or ON.
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_initialize(const relay_t * const relay);

/**
 * @brief Turn the relay on
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_turn_on(const relay_t *const relay);

/**
 * @brief Turn the relay off
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_turn_off(const relay_t * const relay);

/**
 * @brief Toggle the relay
 * @param _relay pointer to the relay module configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue while performing this action
 */
Std_ReturnType relay_toggle(const relay_t * const relay);

#endif	/* ECU_RELAY_H */

