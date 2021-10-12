#include "Meeting.h"

using namespace std; 

Meeting::Meeting(string idSet, DateTime dateSet, string titleSet, string locationSet, Contact** contacts) : Event(idSet, dateSet, titleSet) {	
	date = dateSet.getDate() + " @ " + dateSet.getEndTime() + " " + dateSet.getEndTime();
	location = locationSet;
	attendees = contacts;
}	

string Meeting::getLocation() {
	return location;
}