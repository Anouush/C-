

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    cout << "Mañana será un día mejor.\n";
    return 0;
}

