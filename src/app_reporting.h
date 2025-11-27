#ifndef SRC_INCLUDE_APP_REPORTING_H_
#define SRC_INCLUDE_APP_REPORTING_H_

extern uint32_t last_timeReportMsi;
extern uint8_t  last_seqNum;

void app_forcedReport(uint8_t endpoint, uint16_t claster_id, uint16_t attr_id);

void reportAttrTimerStop(void);
void reportAttrTimerStart(void);


#endif /* SRC_INCLUDE_APP_REPORTING_H_ */
