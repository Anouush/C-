#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
#include <windows.h>


using namespace std;

void option(int opcion)
{
    cout << "Has elegido el opcion " << opcion << endl;
}


int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    int opcion = 1;
    int client_opcion;
    cout << "Elige una opcion \n";
    cout << "Opcion 1 \n";
    cout << "Opcion 2 \n";
    cout << "Opcion 3 \n";
    cin >> client_opcion;

    switch (client_opcion)
    {
    case 1:
        option(opcion);
        break;
    case 2:
        option(opcion + 1);
        break;
    case 3:
        option(opcion + 2);
        break;
    default:
        break;
    }
    return 0;
}
