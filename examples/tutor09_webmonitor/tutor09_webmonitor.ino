#include <DINO-PLC-V2.h>
//-------------------- Extern variables
extern bool USE_PLC_MODBUS;
extern bool USE_PLC_RTC;
extern int  RTC_SYNC_DURATION;
extern bool USE_PLC_MODBUS_TCP;
extern int  MAC_INDEX;
extern byte mac[];  // byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
extern int MAXD_MQTT;
extern int MAXM_MQTT;
extern String DINO_FIRMWARE;

void setup(){
  // - DINO PLC Configurations
  MAXD_MQTT           =  100;
  MAXM_MQTT           =  100;
  USE_PLC_MODBUS      =  true;                  //- Use PLC Modbus function
  USE_PLC_RTC         =  true;                  //- Use PLC RTC function
  USE_PLC_MODBUS_TCP  =  true;                  //- Enable Modbus TCP Server
  initPLC();                                    //- Init FX2N PLC function
}

void loop(){
  PLC_Network_Function();                       //- Very important must be in main loop and no Delay in main loop
}