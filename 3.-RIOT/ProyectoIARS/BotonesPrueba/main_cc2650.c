/*
Ejemplo de control de los LEDS con los botones
*/

#include <stdio.h>
#include <stdint.h>

#include "board.h"
#include "periph/gpio.h"
#include "periph_conf.h"


#define TEST_FLANK      GPIO_FALLING	//flanco de bajada hará saltar la interrupción



static void cb(void *arg)  //callback de la interrupción del botón 0
{
	if (arg){
	LED1_TOGGLE;	//realiza un toggle del esteda de
	LED0_TOGGLE;}	//ambos leds
}

int main(void)
{
	gpio_init_int(BTN0_PIN, BTN0_MODE, TEST_FLANK, cb, (void *)1);	//inicialización de la interrupción del botón 0
	LED1_ON;	//se enciende el led 1
	LED0_OFF;	//se apaga el led 0, así el toggle de ambos es más visual.

	while (1){	//loop infinito
	}
}
