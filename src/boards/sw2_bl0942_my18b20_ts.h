#ifndef _SW2_BL0942_MY18B20_TS_H_
#define _SW2_BL0942_MY18B20_TS_H_

/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif

/**********************************************************************
 * Product Information
 * max 24 symbols
 */
#define ZCL_BASIC_MFG_NAME     {11,'T','e','l','i','n','k','-','p','v','v','x'}
#define ZCL_BASIC_MODEL_ID     {10,'S','W','2','E','M','8','T','S','_','z'}

#define USE_SENSOR_MY18B20		1
#define USE_THERMOSTAT			1
#define USE_SWITCH				1

/************************* Configure MY18B20 GPIO ***************************************/

#define GPIO_ONEWIRE1           GPIO_PD2

/************************* Configure SWITCH GPIO ***************************************/

#define GPIO_SWITCH1            GPIO_PD2

/************************* Configure KEY GPIO ***************************************/

#define BUTTON_ON				0
#define BUTTON_OFF				1

#define GPIO_BUTTON				GPIO_PB5

/************************** Configure LEDs ****************************************/

#define LED_ON                  0
#define LED_OFF                 1

#define GPIO_LED1               GPIO_PB4
#define GPIO_LED2               0

/********************* Configure Relay ***************************/

#define RELAY_ON                1
#define RELAY_OFF               0

#define GPIO_RELAY1				GPIO_PC3

/**************************** Configure UART for BL0942 ***********************************/

#define USE_BL0942				1
#define BAUDRATE_UART           4800
#define GPIO_UART_TX            UART_TX_PB1
#define GPIO_UART_RX            UART_RX_PB7

#define MAX_VOLTAGE_DEF			26000 // 260.00V
#define MIN_VOLTAGE_DEF			18000 // 180.00V
#define MAX_CURRENT_DEF			25000 // 25.000A
#define PERIOD_MAX_CURRENT_DEF	8	// 8 sec
#define PERIOD_RELOAD_DEF		0	// sec
#define PERIOD_START_DEF		0	// sec

/********************* Configure Vbat ***************************/

#define USE_BATTERY			BATTERY_DC_DC

#define SHL_ADC_VBAT        1  // "B0P" in adc.h
#define GPIO_VBAT           GPIO_PB0 // missing pin on case TLSR8251F512ET24
#define PB0_INPUT_ENABLE    1
#define PB0_DATA_OUT        1
#define PB0_OUTPUT_ENABLE   1
#define PB0_FUNC            AS_GPIO


/********************* Configure printf UART ***************************/

#if UART_PRINTF_MODE
#define DEBUG_INFO_TX_PIN       UART_TX_PD3    //printf
#define DEBUG_BAUDRATE          115200

#endif /* UART_PRINTF_MODE */

#endif /* _SW2_BL0942_MY18B20_TS_H_ */

