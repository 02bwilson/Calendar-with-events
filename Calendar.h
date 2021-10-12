#ifndef CALENDAR_H
#define CALENDAR_H

#include "Event.h"

class Calendar {
private: 
	Event** events; 
	int eventCount; 
public: 
	// This operation returns true if the event is successfully added to the collection. False will
	// be returned if there is already an event in the collection with the same id.
	//
	bool addEvent(Event* event);

	// This operation removes the event with the given id from the collection. If there is no 
	// event with the specified id, this operation takes no action.
	//
	void remove(string id);

	// This operation returns an array of events whose title contain the specified keyword.
	// The parameter eventCount is updated with the number of events in the list.
	//
	Event** findEventsByKeyword(string keyword, int& eventCount);
};












#endif