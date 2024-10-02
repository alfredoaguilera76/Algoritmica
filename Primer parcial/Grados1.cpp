#include <iostream>

using namespace std;

int main() {
    float numero, cel, far;

    cout << "Introduzca los grados Celsius: " << endl;
    cin >> numero;
    far = (numero * 9 / 5) + 32;
    cout << "La conversión de " << numero << " grados Celsius a Fahrenheit es: " << far << endl;
    
    return 0;
}