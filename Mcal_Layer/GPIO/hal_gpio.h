/* 
 * File:   hal_gpio.h
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 9:28 PM
 */

#ifndef HAL_GPIO_H
#define	HAL_GPIO_H

/* Section : Includes */
#include "pic18f4620.h"
#include "../mcal_std_types.h"
#include "../device_config.h"
#include "hal_gpio_cfg.h"

/* Section : Macro Declarations */

#define BIT_MASK             (uint8)1

#define PORT_PIN_MAX_NUMBER  (uint8)8
#define PORT_MAX_NUMBER      (uint8)5

#define PORT_MASK            0xFF

/* Section : Macro Functions Declarations */

#define HWREG8(_X)                 (*((volatile uint8 *)(_X)))
#define SET_BIT(REG, BIT_POSN)     (REG |= (BIT_MASK << BIT_POSN))
#define CLEAR_BIT(REG, BIT_POSN)   (REG &= ~(BIT_MASK << BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)  (REG ^= (BIT_MASK << BIT_POSN))
#define READ_BIT(REG, BIT_POSN)    ((REG >> BIT_POSN) & BIT_MASK)

/* Section : Data Type Declarations */

typedef enum{
    LOW = 0,
    HIGH
}logic_t;

typedef enum{
    OUTPUT = 0,
    INPUT
}direction_t;

typedef enum{
    PIN0 = 0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7
}pin_index_t;

typedef enum{
    PORTA_INDEX = 0,
    PORTB_INDEX,
    PORTC_INDEX,
    PORTD_INDEX,
    PORTE_INDEX
}port_index_t;

typedef struct{
    uint8 port          : 3;     /* @ref port_index_t */
    uint8 pin           : 3;     /* @ref pin_index_t */
    uint8 direction     : 1;     /* @ref direction_t */
    uint8 logic         : 1;     /* @ref logic_t */
}pin_config_t;

/* Section : Functions Declarations */

/**
 * @brief function to initialize the direction //OUTPUT or INPUT
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @return the status of function
 */
Std_ReturnType gpio_pin_direction_intialize(const pin_config_t * const pin_config);

/**
 * @brief function to get the direction of pin //OUTPUT or INPUT
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @param direction_status pointer to return the direction of pin
 * @return the status of function
 */
Std_ReturnType gpio_pin_get_direction_status(const pin_config_t * const pin_config, direction_t * const direction_status);

/**
 * @brief function to write logic on pin //HIGH or LOW
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @param logic the value of logic that is wanted to be written
 * @return the status of function
 */
Std_ReturnType gpio_pin_write_logic(const pin_config_t * const pin_config, const logic_t logic);

/**
 * @brief function to get the logic on pin //HIGH or LOW
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @param logic pointer to return the value that is written on pin
 * @return the status of function
 */
Std_ReturnType gpio_pin_read_logic(const pin_config_t * const pin_config, logic_t * const logic);

/**
 * @brief function to toggle the value of logic on pin
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @return the status of function
 */
Std_ReturnType gpio_pin_toggle_logic(const pin_config_t * const pin_config);

/**
 * @brief function to initialize the direction and logic of pin
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @return the status of function
 */
Std_ReturnType gpio_pin_intialize(const pin_config_t * const pin_config);

/**
 * @brief function to initialize the direction of all pins of port //OUTPUT or INPUT
 * @param port the port to be initialized
 * @param direction the direction of the port that is wanted to be determined
 * @return the status of function
 */
Std_ReturnType gpio_port_direction_intialize(const port_index_t port, const uint8 direction);

/**
 * @brief function to get the direction of all pins of port //OUTPUT or INPUT
 * @param port the port that is wanted to get the direction of it
 * @param direction_status pointer to return the direction of port
 * @return the status of function
 */
Std_ReturnType gpio_port_get_direction_status(const port_index_t port, uint8 * const direction_status);

/**
 * @brief function to write logic on all pins of port //HIGH or LOW
 * @param port the port that is wanted to write the logic on it
 * @param logic the logic that is wanted to be written
 * @return the status of function
 */
Std_ReturnType gpio_port_write_logic(const port_index_t const port, const uint8 logic);

/**
 * @brief function to get logic of all pins of port //HIGH or LOW
 * @param port the port that is wanted to determine the logic on it
 * @param logic pointer to return the written logic on it
 * @return the status of function
 */
Std_ReturnType gpio_port_read_logic(const port_index_t port, uint8 * const logic);

/**
 * @brief function to toggle logic value on port
 * @param port the port that is wanted to toggle the logic on it
 * @return the status of function
 */
Std_ReturnType gpio_port_toggle_logic(const port_index_t port);

#endif	/* HAL_GPIO_H */

