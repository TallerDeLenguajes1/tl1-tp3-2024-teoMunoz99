#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /*Escriba un programa que solicite 5 nombres, los cargue en un 
    vector de punteros char y una vez cargados sean listados por pantalla
    (Todo implementando reserva dinámica de memoria)*/

    //Declaro el arreglo de 5 lugares para los names
    char * nombres[5];

    //creo un bucle que se repetira 5 veces(para ingresar los 5 nombres)
    for (int i = 0; i < 5; i++)
    {
        //declaro una variable aux donde guardo el nombre ingresado en cada iteracion
        char nombre[50];
        printf("\n--Ingrese el %d nombre: ", i+1);
        fflush(stdin);
        gets(nombre);
        //Creo el espacio dinamico en cada lugar del array, doy el tamaño del nombre ingresado mas el caracter nulo
        nombres[i] = (char *)malloc(1 + strlen(nombre)*sizeof(char));
        //guardo el nombre ingresado en el array
        strcpy(nombres[i],nombre);
    }
    //Muestro por pantalla el array
    printf("\n-- Lista de nombres --\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %s ", nombres[i]);
    }
    // Libero la memoria asignada para cada nombre
    for (int i = 0; i < 5; i++) {
        free(nombres[i]);
    }
    return 0;
}