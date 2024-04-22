#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define A 5
#define M 12
int main() {
    float prod[A][M];
    float max = 0,min = 50000;//para guardar el max y el min
    int mesMin= 0, anioMin= 0, mesMax = 0, anioMax = 0;//para guardar el max y el min
    for (int i = 0; i < A; i++)
    {
        printf("--Ventas del %d anio --'\n", i+1);
        for (int j = 0; j < M; j++)
        {
            prod[i][j] = rand() % 40001 + 10000;
            printf("mes %d: $%2.f ", j+1, prod[i][j]);
            if(prod[i][j]>= max){
                max = prod[i][j];
                mesMax = j;
                anioMax = i;
            }
            if(prod[i][j] < min){
                min = prod[i][j];
                mesMin = j;
                anioMin = i;
            }
        }
        float promedio=0;
        for (int k = 0; k < 12; k++)
        {
            promedio = promedio + prod[i][k];   
        }
        printf("\n--Promedio de ventas del %d anio: $%2.f'\n", i+1, promedio/12);
        promedio=0;
    }

    printf("El mes %d del anio %d se vendio el mayor monto: $%2.f\n", mesMax, anioMax, max);
    printf("El mes %d del anio %d se vendio el menor monto: $%2.f\n", mesMin, anioMin, min);

    return 0;
}