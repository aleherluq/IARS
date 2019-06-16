/*
Ejemplo de parpadeo de los LEDS 0 y 1 de forma alterna
*/

#include <stdio.h>
#include <stdint.h>

#include "board.h"
#include "periph_conf.h"
#include "periph/gpio.h"

/*definiciones necesarias para realizar un delay controlado*/
#ifdef CLOCK_CORECLOCK
#define DELAY_SHORT         (CLOCK_CORECLOCK / 50)
#else
#define DELAY_SHORT         (500000UL)
#endif
#define DELAY_LONG          (DELAY_SHORT * 4)

void dumb_delay(uint32_t delay)	//función de delay que no hace nada
{
    for (uint32_t i = 0; i < delay; i++) {
        __asm__("nop");
    }
}


int main(void)
{
	LED1_ON;	//se enciende el led 1 y se
	LED0_OFF;	//apaga el led 0, de esta forma el toggle es más llamativo
	while (1){	//loop infinito
		LED1_TOGGLE;
		LED0_TOGGLE;
		dumb_delay(DELAY_SHORT);	//tras el toggle se realiza un delay para que sea visible por el ojo humano.
	}
}
