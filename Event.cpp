#include "Event.h"

using namespace std; 

Event::Event(string idSet, DateTime dateSet, string titleSet){
	id = idSet;
	Date = dateSet; 
	title = titleSet;
}

string Event::getTitle() {
	return title; 
}
string Event::getId() {
	return id;
}

string Event::toString() {
	return "ID: " + id + " Date: " + Date.getDate() + " Time: " + Date.getStartTime() + " - " + Date.getEndTime() + " Title: " + title;
}

void Event::setId(string idSet) {
	id = idSet;
}

void Event::setTitle(string titleSet) {
	title = titleSet;
}