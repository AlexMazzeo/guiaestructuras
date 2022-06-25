/*GUIA ESTRUCTURAS EJERCICIO 4*/

#include <stdio.h>

struct facturas{
    int num;
    int dia;
    float monto;
    char mes[20];
    char nombre_cliente [20];}; /*Se declara la estructura facturas y los datos que incluira.*/

struct facturas factura[10] = {
                            {1, 1, 14.1, "Septiembre", "Alex"},
                            {2, 2, 14.2, "Abril", "Emo"},
                            {3, 3, 14.3, "Mayo", "Pola"},
                            {4, 4, 14.4, "Julio", "Kojo"},
                            {5, 5, 14.5, "Junio", "Juanjo"},
                            {6, 6, 14.6, "Agosto", "Feli"},
                            {7, 7, 14.7, "Marzo", "Kili"},
                            {8, 8, 14.8, "Enero", "Abril"},
                            {9, 9, 14.9, "Noviembre", "Santiago"},
                            {10, 10, 14.10, "Octubre", "James"}}; /*Se declara la estructura facturas con los datos de las facturas.*/
int main(){
    int i;
    int mayor = 0;
    int j;
    
    for(i=0;i<10;i++){
        if(factura[i].monto > mayor){
            mayor = factura[i].monto;
            j = i;
        }
    }
printf("El mejor mes fue %s",factura[j].mes); /*Se comparan las facturas de los meses y se muestran en pantalla.*/
}