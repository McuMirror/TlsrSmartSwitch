#ifndef SRC_INCLUDE_APP_LED_H_
#define SRC_INCLUDE_APP_LED_H_

void led_on(void);
void led_off(void);

void light_on(void);
void light_off(void);

void led_set_control(void);

void light_blink_start(uint8_t times, uint16_t ledOnTime, uint16_t ledOffTime);
void light_blink_stop(void);



#endif /* SRC_INCLUDE_APP_LED_H_ */
