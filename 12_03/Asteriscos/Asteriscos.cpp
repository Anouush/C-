#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
#include <windows.h>
//#include <unistd.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");

    int altura;

    cout << "EScribe la altura de piramide ";
    cin >> altura;
    for (int i = altura; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        //sleep (250);
        cout << endl;
    }

    return 0;
}

