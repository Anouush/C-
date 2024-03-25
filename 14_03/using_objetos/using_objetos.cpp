

#include <iostream>
#include <string>
#include <vector>
#include <locale.h>

using namespace std;

class MyClass 
{      
public:
    int nota;        // Attribute (int variable)
    string nombre_alumno;  // Attribute (string variable)

    // Método para obtener la nota
    int getNota() const 
    {
        return nota;
    }

    // Método para actualizar la nota
    void setNota(int nueva_nota) 
    {
        nota = nueva_nota;
    }
};

int main()
{

    setlocale(LC_ALL, "es_ES.UTF-8");
    vector<MyClass> alumnos;

    for (int i = 1; i < 4; i++)
    {
        MyClass myObj;
        cout << i << " alumno escribe tu nombre completo" << endl;
        getline(cin, myObj.nombre_alumno);
        cout << "Añade tu nota " << endl;
        cin >> myObj.nota;
        cin.ignore();
        alumnos.push_back(myObj);
    }

    cout << "\nDatos de los alumnos:\n";
    for (int i = 0; i < alumnos.size(); i++)
    {
        cout << "Alumno " << i + 1 << ": " << alumnos[i].nombre_alumno << ", Nota: " << alumnos[i].nota << endl;
    }

    // Modificar las notas de los alumnos
    for (int i = 0; i < alumnos.size(); i++) {
        int nueva_nota;
        cout << "\nModifica la nota del alumno " << i + 1 << ": ";
        cin >> nueva_nota;
        alumnos[i].setNota(nueva_nota);
    }

    // Imprimir los datos actualizados de los alumnos
    cout << "\nDatos actualizados de los alumnos:\n";
    for (int i = 0; i < alumnos.size(); i++)
    {
        cout << "Alumno " << i + 1 << ": " << alumnos[i].nombre_alumno << ", Nota: " << alumnos[i].getNota() << endl;
    }

    return 0;
}

