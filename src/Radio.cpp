#include "Radio.h"

Radio::Radio(HardwareSerial *ser, int restart_time):radio_comms(ser) {
	restart_time_out  = restart_time;
	radio_comms->begin(19200);
}

void Radio::begin() {
	RadioUV5R.setup();
// Set transmission time slot
}

void Radio::tick() {
        aprs_send();
}

//bool Radio::transmit(String * packet) {
	//PTT to low
	//tx data over uart
//	return true;
//}

int Radio::systems_check() {
	int check_result = 1337;
	return check_result;
}

