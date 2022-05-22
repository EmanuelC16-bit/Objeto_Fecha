#include <iostream>
#include "Fecha.h"

using namespace std;

Date::Date() {
	day = getDay();
	month = getMonth();
	year = getYear();
}

void Date::setDay(int inDay) {
	//if (day > 0 && day <= 31)
		day = inDay;
	/*else
		throw invalid_argument("Pon un dia valido");*/
}

int Date::getDay() {return day;}

void Date::setMonth(int inMonth) {
	//if(month > 0 && month <= 12)
		month = inMonth;
	/*else
		throw invalid_argument("Pon un mes valido");*/
}

int Date::getMonth() {return month;}

void Date::setYear(int inYear) {
	//if (year > 1900 && year <= 2200)
		year = inYear;
	/*else
		throw invalid_argument("Pon un año valido");*/
}

int Date::getYear() {return year;}