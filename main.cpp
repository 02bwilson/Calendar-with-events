#include <iostream>
#include "Event.h"
#include "Meeting.h"
#include "Appointment.h"
#include "Calendar.h"
using namespace std; 

int main() {
	// Creating an appointment with some information.

	DateTime AppointmentDate;
	AppointmentDate.setDate("12/1");
	AppointmentDate.setStartTime("12:00");
	AppointmentDate.setEndTime("1:00");

	Contact* Person = new Contact("John Doe", "301-555-5555");

	Appointment *firstAppointment = new Appointment("1", AppointmentDate, "Appointment with John", Person);
	
	cout << firstAppointment->toString();

	//Meeting date
	DateTime MeetingDate;
	MeetingDate.setDate("12/2");
	MeetingDate.setStartTime("1:00");
	MeetingDate.setEndTime("2:00");

	// Creating meeting participants
	Contact** MeetingParticipants = new Contact*; 

	Contact* personOne = new Contact("Adam", "333-333-3333");
	Contact* personTwo = new Contact("Joe", "444-444-4444");
	
	MeetingParticipants[0] = personOne;
	MeetingParticipants[1] = personTwo;
	//Meeting(string idSet, DateTime dateSet, string titleSet, string locationSet, Contact** contacts);

	// Creating meeting
	Meeting *firstMeeting = new Meeting("2", MeetingDate, "Meeting with Adam & Joe", "123 N Ave", MeetingParticipants);
	cout << endl;
	cout << firstMeeting->toString() << endl;

	Calendar firstCalendar;
	firstCalendar.addEvent(firstMeeting);
	firstCalendar.addEvent(firstAppointment);
	
	// Int to capture how many return values
	int howMany = 0;
	Event** contains = firstCalendar.findEventsByKeyword("Joe", howMany);
	cout << endl;
	cout << "Searching for keyword Joe: " << howMany << " entries where found." << endl;
	cout << "The returned values is/are: " << endl;
	for (int i = 0; i < howMany; i++) {
		cout << contains[i]->toString() << endl << endl;
	}


	cout << "Removing ID 1 from calendar (if removed nothing should print): " << endl;
	// Removing from calendar 
	firstCalendar.remove("1");
	// Searching for event with "John" in title (it had the id 1 so if it was removed it shouldnt return) 
	contains = firstCalendar.findEventsByKeyword("John", howMany);
	for (int i = 0; i < howMany; i++) {
		cout << contains[i]->toString() << endl;
	}
	return 0;
}