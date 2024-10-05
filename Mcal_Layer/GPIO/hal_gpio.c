/* 
 * File:   hal_gpio.c
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 9:28 PM
 */

#include "hal_gpio.h"

/* Reference to the Data Direction Control Registers */
volatile uint8 * tris_registers[] = {&TRISA, &TRISB, &TRISC, &TRISD, &TRISE};

/* Reference to the Data Latch Register (Read and Write to Data Latch) */
volatile uint8 * lat_registers[]  = {&LATA , &LATB , &LATC , &LATD , &LATE};

/* Reference to the Port Status Register  */
volatile uint8 * port_registers[] = {&PORTA, &PORTB, &PORTC, &PORTD, &PORTE};

/**
 * @brief function to initialize the direction //OUTPUT or INPUT
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @return the status of function
 */
Std_ReturnType gpio_pin_direction_intialize(const pin_config_t * const pin_config)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == pin_config) || ((PORT_PIN_MAX_NUMBER - 1) < pin_config->pin) || ((PORT_MAX_NUMBER - 1) < pin_config->port))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        switch(pin_config->direction)
        {
            case OUTPUT :
                CLEAR_BIT(*tris_registers[pin_config->port], pin_config->pin);
                break;
                
            case INPUT :
                SET_BIT(*tris_registers[pin_config->port], pin_config->pin);
                break;
                
            default :
                return_value = E_NOT_OK;
        }
    }
    
    return return_value;
}

/**
 * @brief function to get the direction of pin //OUTPUT or INPUT
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @param direction_status pointer to return the direction of pin
 * @return the status of function
 */
Std_ReturnType gpio_pin_get_direction_status(const pin_config_t * const pin_config, direction_t * const direction_status)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == pin_config) || (NULL == direction_status))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        *direction_status = READ_BIT(*tris_registers[pin_config->port], pin_config->pin);
    }
    
    return return_value;
}

/**
 * @brief function to write logic on pin //HIGH or LOW
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @param logic the value of logic that is wanted to be written
 * @return the status of function
 */
Std_ReturnType gpio_pin_write_logic(const pin_config_t * const pin_config, const logic_t logic)
{
    Std_ReturnType return_value = E_OK;
    
    if(NULL == pin_config)
    {
        return_value = E_NOT_OK;
    }
    else
    {
        switch(logic)
        {
            case LOW :
                CLEAR_BIT(*lat_registers[pin_config->port], pin_config->pin);
                break;
                
            case HIGH :
                SET_BIT(*lat_registers[pin_config->port], pin_config->pin);
                break;
                
            default :
                return_value = E_NOT_OK;
        }
    }
    
    return return_value;
}

/**
 * @brief function to get the logic on pin //HIGH or LOW
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @param logic pointer to return the value that is written on pin
 * @return the status of function
 */
Std_ReturnType gpio_pin_read_logic(const pin_config_t * const pin_config, logic_t * const logic)
{
    Std_ReturnType return_value = E_OK;
    
    if((NULL == pin_config) || (NULL == logic))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        *logic = READ_BIT(*port_registers[pin_config->port], pin_config->pin);
    }
    
    return return_value;
}

/**
 * @brief function to toggle the value of logic on pin
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @return the status of function
 */
Std_ReturnType gpio_pin_toggle_logic(const pin_config_t * const pin_config)
{
    Std_ReturnType return_value = E_OK;
    
    if(NULL == pin_config)
    {
        return_value = E_NOT_OK;
    }
    else
    {
        TOGGLE_BIT(*lat_registers[pin_config->port], pin_config->pin);
    }
    
    return return_value;
}

/**
 * @brief function to initialize the direction and logic of pin
 * @param pin_config pointer to the pin configuration @ref pin_config_t
 * @return the status of function
 */
Std_ReturnType gpio_pin_intialize(const pin_config_t * const pin_config)
{
    Std_ReturnType return_value = E_OK;
    
    if(NULL == pin_config)
    {
        return_value = E_NOT_OK;
    }
    else
    {
        return_value = gpio_pin_direction_intialize(pin_config);
        return_value = gpio_pin_write_logic(pin_config, pin_config->logic);
    }
    
    return return_value;
}

#if CONFIG_ENABLE == GPIO_PORT_CONFIGURATIONS

/**
 * @brief function to initialize the direction of all pins of port //OUTPUT or INPUT
 * @param port the port to be initialized
 * @param direction the direction of the port that is wanted to be determined
 * @return the status of function
 */
Std_ReturnType gpio_port_direction_intialize(const port_index_t port, const uint8 direction)
{
    Std_ReturnType return_value = E_OK;
    
    if((PORT_MAX_NUMBER - 1) < port)
    {
        return_value = E_NOT_OK;
    }
    else
    {
        *tris_registers[port] = direction;
    }
    
    return return_value;
}

/**
 * @brief function to get the direction of all pins of port //OUTPUT or INPUT
 * @param port the port that is wanted to get the direction of it
 * @param direction_status pointer to return the direction of port
 * @return the status of function
 */
Std_ReturnType gpio_port_get_direction_status(const port_index_t port, uint8 * const direction_status)
{
    Std_ReturnType return_value = E_OK;
    
    if(((PORT_MAX_NUMBER - 1) < port) || (NULL == direction_status))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        *direction_status = *tris_registers[port];
    }
    
    return return_value;
}

/**
 * @brief function to write logic on all pins of port //HIGH or LOW
 * @param port the port that is wanted to write the logic on it
 * @param logic the logic that is wanted to be written
 * @return the status of function
 */
Std_ReturnType gpio_port_write_logic(const port_index_t port, const uint8 logic)
{
    Std_ReturnType return_value = E_OK;
    
    if((PORT_MAX_NUMBER - 1) < port)
    {
        return_value = E_NOT_OK;
    }
    else
    {
        *lat_registers[port] = logic;
    }
    
    return return_value;
}

/**
 * @brief function to get logic of all pins of port //HIGH or LOW
 * @param port the port that is wanted to determine the logic on it
 * @param logic pointer to return the written logic on it
 * @return the status of function
 */
Std_ReturnType gpio_port_read_logic(const port_index_t port, uint8 * const logic)
{
    Std_ReturnType return_value = E_OK;
    
    if(((PORT_MAX_NUMBER - 1) < port) || (NULL == logic))
    {
        return_value = E_NOT_OK;
    }
    else
    {
        *logic = *port_registers[port];
    }
    
    return return_value;
}

/**
 * @brief function to toggle logic value on port
 * @param port the port that is wanted to toggle the logic on it
 * @return the status of function
 */
Std_ReturnType gpio_port_toggle_logic(const port_index_t port)
{
    Std_ReturnType return_value = E_OK;
    
    if((PORT_MAX_NUMBER - 1) < port)
    {
        return_value = E_NOT_OK;
    }
    else
    {
        *lat_registers[port] ^= PORT_MASK;
    }
    
    return return_value;
}

#endif
