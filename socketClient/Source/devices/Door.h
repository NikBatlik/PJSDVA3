/*
 * Door.h
 *
 *  Created on: Dec 18, 2018
 *      Author: programmer
 */

#ifndef DEVICES_DOOR_H_
#define DEVICES_DOOR_H_
#include <iostream>
#include "../Device.h"

class Door : public Device {
public:
	Door(string, int, const char*);
	virtual ~Door();
	void handleActions();

private:
	void handleDoor();
	void handleFire();

};


#endif /* DEVICES_DOOR_H_ */