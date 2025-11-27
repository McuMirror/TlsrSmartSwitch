#ifndef _SW1_BL0937_NS_H_
#define _SW1_BL0937_NS_H_

/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif

/**********************************************************************
 * Product Information
 * max 24 symbols
 */
#define ZCL_BASIC_MFG_NAME     {11,'T','e','l','i','n','k','-','p','v','v','x'}
#define ZCL_BASIC_MODEL_ID     {8,'S','W','1','E','M','8','_','z'}

/************************* Configure KEY GPIO *********************************/

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

#define BL0937_CURRENT_REF        (191547) 		// x1000: 0..65.535A (divisor = 1000 - > A)
#define BL0937_VOLTAGE_REF        (208773)  	// x100: 0..655.35V (divisor = 100 - > V)
#define BL0937_POWER_REF          (1161624) 	// x100 0..327.67W, x10: 327.67..3276.7W (divisor = 10, 100 - > W)
#define BL0937_ENERGY_REF         ((BL0937_POWER_REF + 225)/450) //(=2403) x100 Wh (divisor = 100000 - > kWh)

#define GPIO_CF             	GPIO_PB4
#define GPIO_CF1             	GPIO_PB5
#define GPIO_SEL             	GPIO_PD3

#define PB4_FUNC                AS_GPIO
#define PB4_INPUT_ENABLE        ON

#define PC3_FUNC                AS_GPIO
#define PC3_INPUT_ENABLE        ON

#define PD3_FUNC                AS_GPIO
#define PD3_INPUT_ENABLE        ON
#define PD3_OUTPUT_ENABLE       ON
#define PD3_DATA_OUT 			0

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

#endif /* _SW1_BL0937_NS_H_ */

