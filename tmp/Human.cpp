/*
 * Human.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#include "Human.h"

Human::Human(Watch *w):w(w) {
	//if passed a watch then this human has a watch but
	//could be passed a null pointer as well
}

Human::~Human() {
	//some probs with raw pointers
	//if I own a watch, I am responsible for it
	if(w)
		delete w;
}

//how to get time from a human? You ask.
//this is called delegation
//if has a watch, returns time, otherwise says
//I dont have a watch
std::string Human::getTime(){
	if (w)
		return w->getTime();
	else
		return "I dont have a watch";
}


