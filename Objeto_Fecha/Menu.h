#include <iostream>
#include "Fecha.h"

class Menu : public Date
{
public:
	void start();
	void formato(int opcion);
	void imrpimirFecha(int opcion, Date obj, tm time);
	Menu();
};