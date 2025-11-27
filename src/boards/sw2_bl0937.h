#ifndef _MZSW01_BL0937_H_
#define _MZSW01_BL0937_H_

/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif

/**********************************************************************
 * Product Information
 * max 24 symbols
 */
#define ZCL_BASIC_MFG_NAME     {11,'T','e','l','i','n','k','-','p','v','v','x'}
#define ZCL_BASIC_MODEL_ID     {8,'S','W','2','E','M','8','_','z'}

#define USE_SWITCH				1

/************************* Configure SWITCH GPIO ***************************************/

#define SWITCH1_GPIO            GPIO_PA1

/************************* Configure KEY GPIO ***************************************/

#define BUTTON                  GPIO_PD7

/************************** Configure LED ****************************************/

#define LED_ON                  0
#define LED_OFF                 1

#define LED_GPIO                GPIO_PB1

/********************* Configure Relay ***************************/

#define RELAY_ON                1
#define RELAY_OFF               0

#define RELAY1_GPIO             GPIO_PD2

/**************************** Configure pins for BL0937 ***********************************/

#define USE_BL0937				1
#define GPIO_CF             	GPIO_PB4
#define GPIO_CF1             	GPIO_PB5
#define GPIO_SEL             	GPIO_PD3

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

#endif /* _MZSW01_BL0937_H_ */

