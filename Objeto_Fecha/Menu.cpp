#include "Menu.h"
#include "Fecha.h"
#include <iomanip>
#include <ctime>

using namespace std;

Menu::Menu() {}

void Menu::start() {

	Date date;
	int opcion = 0;
	auto t = time(nullptr);
	#pragma warning(suppress : 4996);
	tm tm = *localtime(&t);

	cout << "Introduzca el tipo de formato que desea: " << endl;
	cout << "1. (MM/DD/YYYY)" << endl;
	cout << "2. (DD/MM/YYYY)" << endl;
	cout << "3. (YYYY/MM/DD)" << endl;
	cout << "Opcion: "; cin >> opcion;
	system("cls");

	Menu::formato(opcion);
	system("cls");

	try
	{
		date.setDay(day);
		date.setMonth(month);
		date.setYear(year);
		Menu::imrpimirFecha(opcion, date, tm);
	}
	catch (const std::exception& error)
	{
		cerr << "Error de formato: " << &error;
	}
}

void Menu::formato(int opcion) {
	switch (opcion)
	{
	case 1:
		cout << "Introduzca fecha:" << endl;
		cout << "MM/DD/YYYY" << endl;
		cin >> month;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << month << "/DD" << "/YYYY" << endl;
		cin >> day;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << month << "/" << day << "/YYYY" << endl;
		cin >> year;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << month << "/" << day << "/" << year << endl;
		break;

	case 2:
		cout << "Introduzca fecha:" << endl;
		cout << "DD/MM/YYYY" << endl;
		cin >> day;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << day << "/MM" << "/YYYY" << endl;
		cin >> month;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << day << "/" << month << "/YYYY" << endl;
		cin >> year;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << day << "/" << month << "/" << year << endl;
		break;

	case 3:
		cout << "Introduzca fecha:" << endl;
		cout << "YYYY/MM/DD" << endl;
		cin >> year;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << year << "/MM" << "/DD" << endl;
		cin >> month;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << year << "/" << month << "/DD" << endl;
		cin >> day;
		system("cls");
		cout << "Introduzca fecha:" << endl;
		cout << year << "/" << month << "/" << day << endl;
		break;

	default:
		cout << "opcion no valida" << endl;
		break;
	}
}

void Menu::imrpimirFecha(int opcion, Date date, tm tm) {
	cout << "Date successfully added!" << endl << endl;
	switch (opcion)
	{
	case 1:
		cout << "Input: " << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << endl;
		cout << "Localtime: " << put_time(&tm, "%m/%d/%Y") << endl;
		break;
	case 2:
		cout << "Input: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;
		cout << "Localtime: " << put_time(&tm, "%d/%m/%Y") << endl;
		break;
	case 3:
		cout << "Input: " << date.getYear() << "/" << date.getMonth() << "/" << date.getDay() << endl;
		cout << "Localtime: " << put_time(&tm, "%Y/%m/%d") << endl;
		break;
	default:
		break;
	}
}