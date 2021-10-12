#ifndef DATETIME_H
#define DATETIME_H 
#include <string>

using namespace std; 

class DateTime {
private: 
	string date; 
	string startTime;
	string endTime; 
public: 
	DateTime(); 

	string getDate();
	string getStartTime();
	string getEndTime(); 


	void setDate(string dateSet);
	void setStartTime(string startTimeSet);
	void setEndTime(string endTimeSet); 
	
};
#endif

