/*Programa: Nombre*/
#include <cstdio> //Simplifica las librerias conio.h y stdio.h

using namespace std;

int main (){
    char nombre [20], apellido[20];
    printf ("Introduzca su nombre: ");
    scanf ("%s", nombre);
    printf ("Introduzca su apellido: ");
    scanf ("%s", apellido);
    printf ("hola %s %s, buenos d%cas. ", nombre, apellido, 161);
    /*Se utiliza el numero 161 para remplazar el % por un caracter especial en ese caso el í*/

    return 0;
}