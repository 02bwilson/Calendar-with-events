#include <iostream>
#include "DateTime.h"

using namespace std; 

DateTime::DateTime() {
	date = "No date given"; 
	startTime = "No start time given ";
	endTime = "No end time given";
}

string DateTime::getDate()  {
	return date;
} 

string DateTime::getStartTime() {
	return startTime;
}

string DateTime::getEndTime() {
	return endTime;
}

void DateTime::setDate(string dateSet) {
	date = dateSet;
}
 
void DateTime::setStartTime(string startTimeSet) {
	startTime = startTimeSet;
}

void DateTime::setEndTime(string endTimeSet) {
	endTime = endTimeSet;
}