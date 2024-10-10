#include <DINO-PLC-V2.h>
//-------------------- Extern variables
extern bool USE_PLC_MODBUS;
extern bool USE_PLC_RTC;
extern int  RTC_SYNC_DURATION;
extern bool USE_PLC_MODBUS_TCP;
extern int  MAC_INDEX;

void setup(){
  USE_PLC_MODBUS      =  true;                  //- Use PLC Modbus function
  USE_PLC_RTC         =  true;                  //- Use PLC RTC function
  RTC_SYNC_DURATION   =  60;                    //- RTC Sync time (Min.)
  USE_PLC_MODBUS_TCP  =  true;                  //- Enable Modbus TCP Server
  MAC_INDEX           =  5;                     //- MAC INDEX
  initPLC();                                    //- Init FX2N PLC function
}

void loop(){
  PLC_Network_Function();                       //- Very important must be in main loop and no Delay in main loop
}