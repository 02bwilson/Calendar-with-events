#include "Calendar.h"

using namespace std; 

Calendar::Calendar() {
	events = new Event*;
	eventCount = 0;
}

bool Calendar::addEvent(Event* event) {
	bool status = true;
	for (int i = 0; i < eventCount; i++) {
		if (event->getId() == events[i]->getId()) {
			status = false; 
		}
	}
	if (status) {
		events[eventCount] = event;
		eventCount++;
	}
	return status; 

}



void Calendar::remove(string id) {
	int i = 0;
	while ((events[i]->getId() != id) && i < eventCount) {
		i++;
	}

	if (i == eventCount) {
		delete events[eventCount];
		eventCount--;
	}
	else {
		for (int b = i; b < eventCount - 1; b++) {
			events[b] = events[b + 1];
		}
		eventCount--;
	}

	

}



Event** Calendar::findEventsByKeyword(string keyword, int& eventCount) {
	Event** retEvents = new Event*; 
	int tempEventCount = 0;
	
	for (int i = 0; i < this->eventCount; i++) {
		// Got this npos statement from offical c++ website 
		if (events[i]->getTitle().find(keyword) != string::npos) {
			
			retEvents[tempEventCount] = events[i];
			tempEventCount += 1;
			
		}
	}
	eventCount = tempEventCount;
	return retEvents; 
}