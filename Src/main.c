/* Includes ------------------------------------------------------------------*/
#include <stm32l0xx.h>
#include <core_cm0plus.h>

void initGeneralIOPorts() {
	SET_BIT(RCC->IOPENR, RCC_IOPENR_GPIOAEN);
}

int main(void) {
	initGeneralIOPorts();
	while(1) {}
}
