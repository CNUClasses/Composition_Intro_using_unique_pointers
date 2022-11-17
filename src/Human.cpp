/*
 * Human.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#include "Human.h"

Human::Human(std::unique_ptr<Watch> &ptr1):w(std::move(ptr1)) {
	//if passed a watch then this human has a watch but
	//could be passed a null pointer as well
	//notice that this is a shallow copy, akin to giving
	//a watch, 
}



//how to get time from a human? You ask.
//this is called delegation
//if has a watch, returns time, otherwise says
//I dont have a watch
std::string Human::getTime(){
	if (w.get())
		return w.get()->getTime();
	else
		return "I dont have a watch";
}


