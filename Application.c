/* 
 * File:   Application.c
 * Author: Yehya.H.Shehata
 *
 * Created on March 18, 2024, 8:44 PM
 */

#include "Application.h"

Std_ReturnType relay1_s, relay2_s;

relay_t relay1 = {
  .pin = PIN0,
  .port = PORTA_INDEX,
  .status = RELAY_OFF
};

relay_t relay2 = {
  .pin = PIN1,
  .port = PORTA_INDEX,
  .status = RELAY_OFF
};

int main() 
{
    relay1_s = relay_initialize(&relay1);
    relay2_s = relay_initialize(&relay2);
    
    while(1)
    {
        relay1_s = relay_toggle(&relay1);
        relay2_s = relay_toggle(&relay2);
        
        __delay_ms(5000);
    }
    
    return (EXIT_SUCCESS);
}