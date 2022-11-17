/*
 * Watch.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */
#include <ctime>
#include "Watch.h"

Watch::Watch() {}

std::string Watch::getTime() {
	const int CONVERT_TO_12_HOUR = 12;
	time_t rawtime;
	struct tm * timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);

	std::string curtime = "The time is: "
			+ std::to_string(timeinfo->tm_min) + " minutes after"
			+ std::to_string(timeinfo->tm_hour % CONVERT_TO_12_HOUR);
	return curtime;
}

