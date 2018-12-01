/**
 * CAN BUS
 *
 * Copyright (c) 2010 Sukkin Pang All rights reserved.
 */

#ifndef canbus__h
#define canbus__h

#define CANSPEED_125 	7		// CAN speed at 125 kbps
#define CANSPEED_250  	3		// CAN speed at 250 kbps
#define CANSPEED_500	1		// CAN speed at 500 kbps

/* Details from http://en.wikipedia.org/wiki/OBD-II_PIDs */
#define PID_0_20            0x00    //PID 0 - 20 supported
#define PID_0_20_DESC               "PID 0x00 - 0x20 Supported"
#define ENGINE_COOLANT_TEMP 0x05
#define ENGINE_COOLANT_TEMP_DESC    "Engine Coolant Temperature"
#define ENGINE_RPM          0x0C
#define ENGINE_RPM_DESC             "Engine RPM"
#define INTAKE_TEMP         0x0F    //
#define INTAKE_TEMP_DESC            "Intake Air Temperature"
#define ENGINE_RUNTIME      0x1F    //
#define ENGINE_RUNTIME_DESC         "Run Time Since Engine Started"
#define ECU_VOLTAGE         0x42    //
#define ECU_VOLTAGE_DESC            "Control Module Voltage"

#define PID_REQUEST         0x7DF
#define PID_REPLY			      0x7E8

class CanbusClass
{
  public:

	CanbusClass();
  char init(unsigned char);
	char message_tx(void);
	char message_rx(unsigned char *buffer);
  char ecu_req(unsigned char pid,  char *buffer);
	unsigned long last_response();
private:
	unsigned long _lastResponseTime = 0;
};
extern CanbusClass Canbus;
//extern tCAN message;

#endif
