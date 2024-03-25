
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <int> numeros = {1, 2, 3, 4, 5, 6};
    for (int i = 7; i < 10; i++)
    {
        numeros.push_back(i);
    }
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    return 0;
}
