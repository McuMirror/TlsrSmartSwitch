#include "app_main.h"

#ifdef ZCL_ON_OFF_SWITCH_CFG

_CODE_ZCL_ status_t zcl_onoffCfg_register(u8 endpoint, u16 manuCode, u8 attrNum, const zclAttrInfo_t attrTbl[], cluster_forAppCb_t cb) {
return zcl_registerCluster(endpoint, ZCL_CLUSTER_GEN_ON_OFF_SWITCH_CONFIG, manuCode, attrNum, attrTbl, NULL, cb);
}
#endif /* ZCL_ON_OFF_SWITCH_CFG */
