#include <iostream>
#include <limits> // Para std::numeric_limits
#include <string>

using namespace std;

int main()
{

    // Variables
    int numAlumnos = 0;

    while (true) // Bucle infinito para seguir pidiendo entrada hasta que se ingrese un número válido
    {
        cout << "Ingrese el número de alumnos (debe ser un número positivo): ";
        cin >> numAlumnos;

        if (cin.fail() || numAlumnos <= 0)
        {                                                             // Verifica si la entrada es inválida o no positiva
            cin.clear();                                              // Limpia la bandera de error en cin
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar entrada inválida
            cout << "Entrada inválida. Por favor, ingrese un número positivo." << endl;
        }
        else
        {
            break; // Salir del bucle si se ingresa un número válido
        }
    }

    return 0;
}
