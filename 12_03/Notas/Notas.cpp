#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");

    int notas[5];
    for (int i = 0; i < 5; i++)
    {
        int nota;
        cout << "Escribir la " << i + 1  << " nota de 0 a 10" << "\n";
        cin >> nota;
        notas[i] = nota;
    }
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        int nota_final = notas[i];
        cout << "Nota " << i + 1 << "=" << nota_final << endl;
        suma += nota_final; 
    }
    float media = suma / 5;
    //cout << "La suma  de las notas es " << suma << endl;
    cout << "La media nota es " << media << endl;

    return 0;
}
