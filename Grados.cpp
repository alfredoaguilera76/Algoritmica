#include <iostream>

using namespace std;

int main() {
    float numero, cel, far;
    int opc = 0;

    do {
        cout << "===========Menu===========" << endl;
        cout << "¿Qué es lo que quieres hacer?" << endl;
        cout << "1) Grados Celsius a Fahrenheit" << endl;
        cout << "2) Grados Fahrenheit a Celsius" << endl;
        cout << "3) Salir" << endl;
        cout << "¿Elige una opción: " << endl;
        cin >> opc;
        
        switch (opc) {
            case 1: 
                cout << "Introduzca los grados Celsius: " << endl;
                cin >> numero;
                far = (numero * 9 / 5) + 32;
                cout << "La conversión de " << numero << " grados Celsius a Fahrenheit es: " << far << endl;
            break;
            case 2: 
                cout << "Introduzca los grados Fahrenheit: " << endl;
                cin >> numero;
                cel = (numero - 32) * 5 / 9;
                cout << "La conversión de " << numero << " grados Fahrenheit a Celsius es: " << cel << endl;
            break;
            case 3:
                cout << "Saliendo..." << endl;
            break;
            default:
                cout << "Elige una opción entre 1 y 3" << endl;
            break;
        }
    } while (opc != 3);

    return 0;
}
