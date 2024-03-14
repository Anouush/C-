
#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    
    int catetoA, catetoB;

    cout << "Vamos a calcular una hepatenusa\nIntroduce el primer cateto \n";
    cin >> catetoA;
    cout << "Introduce el segundo cateto\n";
    cin >> catetoB;

    double hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));
    cout << "Hipotenusa de " << catetoA << " y " << catetoB << " calculada con la funcion pow cuadrados y potencias es\n" << hipotenusa << endl;

    hipotenusa = hypot(catetoA, catetoB);
    cout << "\nLa hipotenusa de " << catetoA << " y " << catetoB << " calculada con la funcion hipot es \n" << hipotenusa << endl;
    return 0;
}

