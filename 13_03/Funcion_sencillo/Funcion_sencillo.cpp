#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
#include <windows.h>



using namespace std;

string nombre_apellido(string nombre, string apellido)
{
    return (nombre + " " + apellido);
}

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    string nombre, apellido;

    cout << "Escribe tu nombre \n";
    cin >> nombre;

    cout << "Escribe tu apellido \n";
    cin >> apellido;

    string nombre_completo = nombre_apellido(nombre, apellido);
    cout << "Tu nombre completo es " << nombre_completo << endl;
}
