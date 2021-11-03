#ifndef MEETING_H
#define MEETING_H 

#include "Event.h"

using namespace std; 


class Meeting : public Event {
private:  
	string location;
	string date;
	Contact** attendees; 
public: 
	Meeting(string idSet, DateTime dateSet, string titleSet, string locationSet, Contact** contacts);
	string toString();
	string getLocation();
	Contact** getContacts();
};



#endif