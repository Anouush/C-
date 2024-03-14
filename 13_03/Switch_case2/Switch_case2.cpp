#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
#include <windows.h>
#include <conio.h>


using namespace std;

void option(int opcion)
{
    cout << "Has elegido el opcion " << opcion << endl;
}

bool menu()
{
    int opcion = 1;
    int client_opcion;
    cout << "Elige una opcion \n";
    cout << "Opcion 1 \n";
    cout << "Opcion 2 \n";
    cout << "Opcion 3 \n";
    cout << "Salir 4 \n";
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
    case 4:
        return 0;
        break;
    default:
        cout << "Error de opcion, elige una valida \n";
        break;
    }
    system("pause");
    system("cls");
    menu();
}


int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    menu();

    return 0;
}