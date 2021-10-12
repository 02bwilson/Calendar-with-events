#ifndef	CONTACT_H
#define CONTACT_H

#include <string>

using namespace std; 

class Contact {
private: 
	string name; 
	string phoneNum;

	Contact(string nameIn, string phoneNumIn);

public: 
	string getName();
	string getPhoneNum();

	void setName(string nameIn);
	void setPhone(string phoneIn);

	string toString();

};


#endif 