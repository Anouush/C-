// Check_human.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    string full_name;
    int x;
    int y;
    int sum;

    x = 5;
    y = 9;
    sum = x + y;

    cout << "Please enter your name and surname\n";
    getline(cin, full_name);
    cout << "The sum of the numbers " << x << " + " << y << endl;
    cin >> sum;
    if (sum != 14)
        cout << "The answer is wrong \n";
    else
        cout << "Welcome " << full_name << endl;

    return 0;
}
