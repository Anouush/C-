

#include <iostream>
#include <locale.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    //string name;
    //string surname;
    string full_name;
    cout << "Please enter your name and surname\n";
    //cin >> name >> surname;
    //full_name = name + " " + surname;
    //full_name = name.append( surname);
    //cin >> full_name;
    getline(cin, full_name);
    cout << "Your complete name is " << full_name << endl;
    cout << "The first letter of your name is " << full_name[0] << endl;
    cout << "The length of yor full name is " << full_name.length() << endl;

    return 0;
}

