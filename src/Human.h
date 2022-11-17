/*
 * Human.h
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#ifndef HUMAN_H_
#define HUMAN_H_
#include <memory>
#include "Watch.h"

class Human {
public:

	//pass by ref since you cannot copy construct a unique pointer
	Human(std::unique_ptr<Watch> &ptr1);

	//do not need to define destructor, the default mplementation will do

	//how to get time from a human? You ask.
	//this is called delegation
	//if this human has a watch, 
	//return the time, otherwise return
	//"I dont have a watch"
	std::string getTime();
	
private:
	//pointer, if have no watch its null
	std::unique_ptr<Watch> w;

	//copy and assign are automatically disabled (ie will not compile if you try it)  because of the unique pointer
};

#endif /* HUMAN_H_ */
