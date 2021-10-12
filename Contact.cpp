#include "Contact.h"


using namespace std; 

string Contact::getName() {
	return name;
}
string Contact::getPhoneNum() {
	return phoneNum;
}

void Contact::setName(string nameIn) {
	name = nameIn;
}
void Contact::setPhone(string phoneIn) {
	phoneNum = phoneIn;
}

string Contact::toString() {
	return "Name: " + name + " Phone Num: " + phoneNum;
}