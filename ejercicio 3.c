/*GUIA ESTRUCTURAS EJERCICIO 3*/

#include <stdio.h>

struct estudiantes{
    int dni;
    int cantidad;
    float notas[10];}; /*Se declara la estructura estudiantes y los datos que incluira.*/

int main(){
    int i = 0;
    int j = 0;
    float acumulador = 0;
    float promedio = 0;
    struct estudiantes estudiante[5]; /*Declaro vector de estructuras.*/

    for(i=0; i<5; i++)
	{
        printf("Ingrese el dni del estudiante %d: ", i+1);
        scanf("%d", &estudiante[i].dni);
        printf("Ingrese cantidad de notas: ");
        scanf("%d", &estudiante[i].cantidad);
        printf("Ingrese notas del estudiante: ", i+1); 
        
        for(j=0; j<10; j++)
		{
		    if(j < estudiante[i].cantidad)
			{
			    scanf("%f", &estudiante[i].notas[j]);
			}
			else
			{
                estudiante[i].notas[j] = -1;
            }
        }
    }

for(i=0; i<5; i++)
	{
        for(j=0; j<estudiante[i].cantidad; j++)
		{
            acumulador += estudiante[i].notas[j];
        }
        if(estudiante[i].cantidad == 0)
        {
            promedio = 0;
        }
        else
        {
            promedio = acumulador / estudiante[i].cantidad;
        }
        printf("dni: %d          promedio: %.2f\n", estudiante[i].dni, promedio); /*Se muestra en pantalla el dni de cada estudiante con del promedio de sus examenes.*/
    }
    return 0;
}