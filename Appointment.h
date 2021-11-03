#ifndef APPOINTMENT_H
#define APPOINTMENT_H


#include "Event.h"

using namespace std;

class Appointment : public Event {
private: 
	string dateStr;
	Contact* person; 

public: 
	Appointment(string idSet, DateTime dateSet, string titleSet, Contact* contact);

	
	string toString();
};
















#endif