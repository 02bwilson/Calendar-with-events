#ifndef EVENT_H
#define EVENT_H

#include "DateTime.h"
#include "Contact.h"
#include <iostream>


using namespace std; 

class Event {
private:  
	string id;
	DateTime Date; 
	string title;

protected:
	Event(string idSet, DateTime dateSet, string titleSet);
	

public: 

	
	virtual string getId();

	virtual string getTitle();

	virtual string toString();

	virtual void setId(string idSet);

	virtual void setTitle(string titleSet);





};

#endif 