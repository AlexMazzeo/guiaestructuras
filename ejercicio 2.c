/*GUIA ESTRUCTURAS EJERCICIO 2*/

#include <string.h>
#include <stdio.h>

struct vuelo{
    char codigo[10];
    char partida[20];
    char destino[20];}; /*Se declara la estructura vuelo y los datos que incluira.*/

int main(){
    int i = 0;
    int vuelo_encontrado = 0;
    char ciudad[20];
    struct vuelo vuelos[4];    
    
    for(i=0; i<4; i++)
	{
        printf("Ingrese el codigo del vuelo: ");
        scanf("%s", &vuelos[i].codigo);
        printf("Ingrese la ciudad de partida: ");
        scanf("%s", &vuelos[i].partida);
        printf("Ingrese la ciudad de destino: ");
        scanf("%s", &vuelos[i].destino);
    }
    printf("Ingrese la ciudad donde busque vuelos: ");
    scanf("%s", ciudad);
    
    for(i=0; i<4; i++)
	{
        if(strcmp(ciudad, vuelos[i].partida) == 0)
        {
        	printf("Vuelo que parte de %s: %s\n", ciudad, vuelos[i].codigo);
        	vuelo_encontrado = 1;
        }
    }
    for(i=0; i<4; i++)
	{
        if(strcmp(ciudad, vuelos[i].destino) == 0)
		{
			printf("Vuelo que arriba a %s: %s\n", ciudad, vuelos[i].codigo);
            vuelo_encontrado = 1;
        }
    }
    if(vuelo_encontrado == 0)
    {
        printf("Mensaje de ERROR - No existe ningun vuelo que parta o arribe a la ciudad ingresada");
    }
return 0;
}