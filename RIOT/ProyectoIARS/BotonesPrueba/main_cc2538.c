/*
Ejemplo de control de los LEDS con los botones
*/

#include <stdio.h>
#include <stdint.h>

#include "board.h"
#include "periph/gpio.h"
#include "periph_conf.h"


#ifdef CLOCK_CORECLOCK
#define DELAY_SHORT         (CLOCK_CORECLOCK / 50)
#else
#define DELAY_SHORT         (500000UL)
#endif
#define DELAY_LONG          (DELAY_SHORT * 4)
#define TEST_FLANK      GPIO_FALLING


void dumb_delay(uint32_t delay)
{
    for (uint32_t i = 0; i < delay; i++) {
        __asm__("nop");
    }
}
/* Funciones de callback de los botones*/

static void callbackUP(void *arg)
{
    if (arg){
	LED0_TOGGLE;
    }
}
static void callbackDOWN(void *arg)
{
    if (arg){
	LED1_TOGGLE;
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
	LED0_TOGGLE;
	LED1_TOGGLE;
	LED2_TOGGLE;
	LED3_TOGGLE;
    }
}

/* Inicialización de las interrupciones de los botones*/

void int_init (void){

gpio_init_int(BTN_UP, BTN_MODE, TEST_FLANK, callbackUP, (void *)1);
gpio_init_int(BTN_DO, BTN_MODE, TEST_FLANK, callbackDOWN, (void *)1);
gpio_init_int(BTN_LE, BTN_MODE, TEST_FLANK, callbackLEFT, (void *)1);
gpio_init_int(BTN_RI, BTN_MODE, TEST_FLANK, callbackRIGHT, (void *)1);
gpio_init_int(BTN_SE, BTN_MODE, TEST_FLANK, callbackSEL, (void *)1);

}

int main(void)
{
int_init();

while (1){}
}
