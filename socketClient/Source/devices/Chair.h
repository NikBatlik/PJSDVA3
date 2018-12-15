/*
 * Chair.h
 *
 *  Created on: Dec 13, 2018
 *      Author: programmer
 */

#ifndef CHAIR_H_
#define CHAIR_H_

#include <iostream>
//#include "../File.h"
//#include "../sockClient.h"
#include "../Device.h"



class Chair : public Device { //might create "motherclass" with common attributes like file, socket etc.

public:
	Chair(string ip, int port, const char* path);
	virtual ~Chair();
	void handleActions();
private:
	void handleBedtime();
	bool handleAggression();
//located = hanks room?
//date bought?
	//Aggression

};

#endif /* CHAIR_H_ */