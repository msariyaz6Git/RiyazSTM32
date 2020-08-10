/*
 * ledbl.h
 *
 *  Created on: 30-May-2020
 *      Author: ELCOT
 */

#ifndef LEDBL_H_
#define LEDBL_H_
#include "stm32f10x.h"

#define GPIO_PORT_NUMBER               (2)
#define GPIO_PIN_NUMBER                (13)
#define GPIO_PIN_ACTIVE_LOW                (1)

#define BLINK_GPIOx(_N)                 ((GPIO_TypeDef *)(GPIOA_BASE + (GPIOB_BASE-GPIOA_BASE)*(_N)))
#define GPIO_PIN_MASK(_N)              (1 << (_N))
#define BLINK_RCC_MASKx(_N)             (RCC_APB2Periph_GPIOA << (_N))

gpio_pin_on(void)
{
#if (GPIO_PIN_ACTIVE_LOW)
  GPIO_ResetBits(BLINK_GPIOx(GPIO_PORT_NUMBER),
		  GPIO_PIN_NUMBER = 1 << GPIO_PIN_NUMBER
#else
  GPIO_SetBits(BLINK_GPIOx(GPIO_PORT_NUMBER),
		  GPIO_PIN_NUMBER = 1 << GPIO_PIN_NUMBER
#endif
}

inline void
__attribute__((always_inline))
gpio_pin_off(void)
{
#if (GPIO_PIN_ACTIVE_LOW)
  GPIO_SetBits(BLINK_GPIOx(GPIO_PORT_NUMBER),
		 GPIO_PIN_NUMBER = 1 << GPIO_PIN_NUMBER
#else
  GPIO_ResetBits(BLINK_GPIOx(GPIO_PORT_NUMBER),
		 GPIO_PIN_NUMBER = 1 << GPIO_PIN_NUMBER
#endif
}

#endif /* LEDBL_H_ */
