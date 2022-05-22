#include "Menu.h"
#include "Fecha.h"

using namespace std;

void Menu::start() {
	cout << "Introduzca fecha:" << endl;
	cout << "MM/DD/YY" << endl;
	cin >> day;
}