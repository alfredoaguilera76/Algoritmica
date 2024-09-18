#include <cstdio>

using namespace std;

int main (){
    int año, edad;

    printf ("Cual es tu año de nacimiento: \n");
    scanf ("%i", &año);

    edad = 2024 - año;

    printf ("Tu edad es %i: \n", edad);
    return 0;
}