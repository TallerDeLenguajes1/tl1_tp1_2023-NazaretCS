#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *punt;
    int valor;

    valor = 1;
    punt = &valor;

    printf(" \n ----------------------------- PROGRAMA DEL TP01 ---------------------------------  \n \n \n");

    printf("> La direccion de memoria almacenada por el puntero:  %d  \n\n", punt);
    printf("> la direccion de memoria de la variable valor es: %d   \n\n", punt);
    printf("> La direccion de memoria del puntero es: %d  \n \n", &punt);
    printf("> El tamanio de memoria utilizado por esa variable usando la funcion sizeof() es: '%d'  \n \n", (sizeof( int )));
    printf("> El contenido del puntero %d  \n\n", *punt);
    printf("> La direccion de memoria almacenada por el puntero  \n\n", punt);
    printf("> La direccion de memoria de la variable  \n\n", valor);
    printf("> La direccion de memoria del puntero.  \n\n", &punt);

 printf(" \n ----------------------------- PROGRAMA DEL TP01 --------------------------------- \n\n\n\n");
    


    return 0;
}