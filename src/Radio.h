#include <Arduino.h>
#include "Module.h"

class Radio: public Module {
	int restart_time_out;
	HardwareSerial *radio_comms;
public:
	Radio(HardwareSerial *serial, int restart_time);
	void begin();
	void tick();

//	bool transmit(String *packet);
	int systems_check();
};
