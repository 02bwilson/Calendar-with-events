#include "Meeting.h"

using namespace std; 

Meeting::Meeting(string idSet, DateTime dateSet, string titleSet, string locationSet, Contact** contacts) : Event(idSet, dateSet, titleSet) {	
	date = dateSet.getDate() + " @ " + dateSet.getStartTime() + " " + dateSet.getEndTime();
	location = locationSet;
	attendees = contacts;
}	

string Meeting::getLocation() {
	return location;
}

Contact** Meeting::getContacts() {	
	return attendees;
}

string Meeting::toString() {
	// For this to string statement, I wasnt sure if you wanted us to print out all the contacts (to me it would make more sense for someone to get the contacts only 
	// if they ask for them since it could be a long list & would fill console & you didnt specify to add an attendee counter so I ommited this)
	return "ID: " + this->getId() + " Date: " + date + " Title: " + this->getTitle() + " Location " + location;
}