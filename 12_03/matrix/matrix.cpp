#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int three = 0;
    int five = 0;

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {  
            if (matriz[i][j] == 3)
            {
                three = matriz[i][j];
            }
            if (matriz[i][j] == 5)
            {
                five = matriz[i][j];
            }
            cout << matriz[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << three << endl;
    cout << five << endl << endl;

    int modulo = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 3 == 0)
            {
                cout << "A";
            }
            else
                cout << matriz[i][j];
        }
        cout << endl;
    }

    return 0;
}
