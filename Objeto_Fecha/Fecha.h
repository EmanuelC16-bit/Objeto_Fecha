#include <iostream>

class Date {
	
public:
	int day, month, year;
	Date(int inDay, int inMonth, int inYear) : day(inDay), month(inMonth), year(inYear) {};
	void setDay();
	int getDay();
};