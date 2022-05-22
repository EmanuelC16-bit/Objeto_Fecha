// Objeto_Fecha.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Menu.h"

using namespace std;

class program {
    private:
        Menu st;
    public: 
        void run();
        program() {}
};

int main()
{
    program a;
    a.run();
}

void program::run()
{
    st.start();
}
