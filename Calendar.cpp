#include "Calendar.h"

using namespace std; 



bool Calendar::addEvent(Event* event) {
	bool status;
	for (int i = 0; i < eventCount; i++) {
		if (event->getId() == events[i]->getId()) {
			status = false; 
		}
	}
	if (status != false) {
		events[eventCount + 1] = event;
		eventCount++;
		status = true;
	}
	return status; 

}



void Calendar::remove(string id) {
	int i = 0;
	
	while (events[i]->getId() != id) {
		i++;
	}
	for (int b = i; b < eventCount; b++) {
		events[i] = events[i + 1];
		eventCount--;
	}
}


Event** Calendar::findEventsByKeyword(string keyword, int& eventCount) {
	Event** retEvents = new Event*; 
	int tempEventCount = 0;
	for (int i = 0; i < eventCount; i++) {
		if (events[i]->getTitle().find(keyword)) {
			retEvents[tempEventCount] = events[i];
			tempEventCount++;
		}
	}
	eventCount = tempEventCount;
	return retEvents; 
}