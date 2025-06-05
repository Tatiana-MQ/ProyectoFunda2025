#include <iostream>
#include <limits> // Para std::numeric_limits
#include <string>

using namespace std;

int main()
{
    int numAlumnos;
    int limiteAlumnos = 100;
    int intentos = 0;
    const int maxIntentos = 5;

    // Pedir al usuario un número válido
    while (intentos < maxIntentos)
    {
        cout << "Ingrese el número de alumnos (entre 1 y " << limiteAlumnos << "): ";
        cin >> numAlumnos;

        // Verifiar si el usuario escribió un número válido
        if (cin.fail())
        {
            cin.clear();                                         // Limpia el error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el teclado
            cout << "Eso no es un número. Inténtelo de nuevo." << endl;
            intentos++;
        }
        else if (numAlumnos <= 0 || numAlumnos > limiteAlumnos)
        {
            cout << "El número debe estar entre 1 y " << limiteAlumnos << "." << endl;
            intentos++;
        }
        else
        {
            // Si es válido salimos del bucle
            break;
        }

        cout << "Intento " << intentos << " de " << maxIntentos << "." << endl;
    }

    if (intentos == maxIntentos)
    {
        cout << "Demasiados intentos fallidos. El programa finalizo." << endl;
        return 1; // Salir con error
    }

    cout << "Número de alumnos ingresado correctamente: " << numAlumnos << endl;

    return 0;
}
