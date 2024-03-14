
#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    string full_name;
    char c;
    int sum;
    int i = 0;
    int j = 2;

    cout << "Introduce tu nombre completo\n";
    getline(cin, full_name);
    cout << "Si eres un humano introduce la suma correcta de 5 + 9. Tienes 3 oportunidades \n";
    do
    {
        cin >> sum;
        if (sum != 14)
        {
            cout << "La suma es incorrecta. Tienes " << j << " oportunidades para intentar\n";
            if (sum != 14 && i < 3)
            {
                j--;
            }
            i++;
        }
        else
        {
            cout << "Benvenida " << full_name << "!\n";
            break;
        }

    } while (sum != 14 && i < 3);

    if (sum != 14 && i == 3)
        cout << "No eres humano, intenta mas tarde \n";

    return 0;
}