

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    string x;
    cout << "Put down your name \n";
    cin >> x;
    cout << "Welcome " << x << "!!\n";
    
    return 0;
}

