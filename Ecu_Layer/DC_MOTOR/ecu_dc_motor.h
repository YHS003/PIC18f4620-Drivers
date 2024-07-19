/* 
 * File:   ecu_dc_motor.h
 * Author: Yehya.H.Shehata
 *
 * Created on July 9, 2024, 1:45 PM
 */

#ifndef ECU_DC_MOTOR_H
#define	ECU_DC_MOTOR_H

/* Section : Includes */
#include "ecu_dc_motor_cfg.h"
#include "../../Mcal_Layer/GPIO/hal_gpio.h"

/* Section : Macro Declarations */
#define DC_MOTOR_PIN_1          0
#define DC_MOTOR_PIN_2          1

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */
typedef enum{
    DC_MOTOR_OFF = 0,
    DC_MOTOR_ON
}dc_motor_status_t;

typedef struct{
    pin_config_t dc_motor_pins[2];
}dc_motor_t;

/* Section : Functions Declarations */

/**
 * @brief Initialize the assigned pins to be OUTPUT and turn the motor OFF or ON.
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_initialize(const dc_motor_t * const dc_motor);

/**
 * @brief Move the motor to the right direction
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_move_right(const dc_motor_t * const dc_motor);

/**
 * @brief Move the motor to the left direction
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_move_left(const dc_motor_t * const dc_motor);

/**
 * @brief stop the motor movement
 * @param dc_motor pointer to the motor configurations
 * @return Status of the function
 *          (E_OK) : The function done successfully
 *          (E_NOT_OK) : The function has issue to perform this action
 */
Std_ReturnType dc_motor_stop(const dc_motor_t * const dc_motor);

#endif	/* ECU_DC_MOTOR_H */

