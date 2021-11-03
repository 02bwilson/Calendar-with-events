#include "Appointment.h"

using namespace std; 



Appointment::Appointment(string idSet, DateTime dateSet, string titleSet, Contact* contact) : Event(idSet, dateSet, titleSet) {
	person = contact;
	dateStr = dateSet.getDate() + " @ " + dateSet.getStartTime() + " - " + dateSet.getEndTime();

}


string Appointment::toString() {
	return "ID: " + this->getId() + " Date: " + dateStr + " Title: " + this->getTitle() + " Contact: " + person->toString();
}