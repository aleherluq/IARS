/*
Ejemplo de control de los LEDS con los botones
*/

#include <stdio.h>
#include <stdint.h>

#include "board.h"
#include "periph/gpio.h"
#include "periph_conf.h"


#define TEST_FLANK      GPIO_FALLING	//flanco de bajada hará saltar la interrupción



/* Funciones de callback de los botones*/

static void callbackUP(void *arg)
{
    if (arg){
	LED0_TOGGLE;	//cada botón actua sobre un único led
    }
}
static void callbackDOWN(void *arg)
{
    if (arg){
	LED1_TOGGLE;	//así se comprueba que todo funciona correctamente
    }
}
static void callbackLEFT(void *arg)
{
    if (arg){
	LED2_TOGGLE;
    }
}
static void callbackRIGHT(void *arg)
{
    if (arg){
	LED3_TOGGLE;
    }
}
static void callbackSEL(void *arg)
{
    if (arg){
	LED0_TOGGLE;	//como hay un botón más que ledes
	LED1_TOGGLE;	//este botón hace toggle de todos
	LED2_TOGGLE;	//a la vez
	LED3_TOGGLE;
    }
}

/* función que realiza la inicialización de las interrupciones de los botones*/

void int_init (void){

gpio_init_int(BTN_UP, BTN_MODE, TEST_FLANK, callbackUP, (void *)1);
gpio_init_int(BTN_DO, BTN_MODE, TEST_FLANK, callbackDOWN, (void *)1);
gpio_init_int(BTN_LE, BTN_MODE, TEST_FLANK, callbackLEFT, (void *)1);
gpio_init_int(BTN_RI, BTN_MODE, TEST_FLANK, callbackRIGHT, (void *)1);
gpio_init_int(BTN_SE, BTN_MODE, TEST_FLANK, callbackSEL, (void *)1);

}

int main(void)
{
	int_init();	//se inicializan las interrupciones

	while (1){}	//loop infinito
}
