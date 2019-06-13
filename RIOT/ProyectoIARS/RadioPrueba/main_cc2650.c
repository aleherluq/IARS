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

static void cb(void *arg)
{
	if (arg){
	LED1_TOGGLE;
	LED0_TOGGLE;}
//return;
}

int main(void)
{
//int i=0;
gpio_init_int(BTN0_PIN, BTN0_MODE, TEST_FLANK, cb, (void *)1);
LED1_ON;
LED0_OFF;

while (1){
//dumb_delay(DELAY_SHORT);
}
}
