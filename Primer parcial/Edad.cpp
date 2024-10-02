#include <iostream>

using namespace std;

int main (){
    int año, edad;

    cout << "Cual es tu año de nacimiento: " << endl;
    cin >> año;

    edad = 2024 - año;

    cout << "Tu edad es: " << edad << endl;
    return 0;
}