/*
 * Human.h
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#ifndef HUMAN_H_
#define HUMAN_H_
#include "Watch.h"

class Human {
public:
	Human(Watch *w);
	virtual ~Human();

	//how to get time from a human? You ask.
	//this is called delegation
	//if has a watch, returns time, otherwise says
	//I dont have a watch
	std::string getTime();

private:
	Watch *w;
};

#endif /* HUMAN_H_ */
