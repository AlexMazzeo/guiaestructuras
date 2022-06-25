/*GUIA ESTRUCTURAS EJERCICIO 1*/

#include <stdio.h>

struct estudiantes{
    int dni;                                                  
    float nota1;
    float nota2;
}; /*Se declara la estructura y sus datos*/

int main(){
    int i = 0;
    float promedio;   
    struct estudiantes estudiante[5]; /*Se asigna una posicion por cada estudiante.*/

    for(i=0; i<5; i++)
    {
        printf("Ingrese el dni del estudiante %d: ", i+1);
        scanf("%d", &estudiante[i].dni);
        printf("Ingrese la nota n1 del estudiante %d: ", i+1); 
        scanf("%f", &estudiante[i].nota1);                         
        printf("Ingrese la nota n1 del estudiante %d: ", i+1);
        scanf("%f", &estudiante[i].nota2);
    }

    for(i=0; i<5; i++)
    {
        promedio = (estudiante[i].nota1 + estudiante[i].nota2)/2;
        printf("dni: %d             promedio: %.2f\n", estudiante[i].dni, promedio); /*Se muestra en pantalla el dni y su promedio.*/
    }
}