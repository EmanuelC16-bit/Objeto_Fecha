#pragma once

class Date
{
protected:
	int day, month, year;
public:
	Date();
	Date(int inDay, int inMonth, int inYear) : day(inDay), month(inMonth), year(inYear) {};
	void setDay(int day);
	int getDay();
	void setMonth(int month);
	int getMonth();
	void setYear(int year);
	int getYear();
};