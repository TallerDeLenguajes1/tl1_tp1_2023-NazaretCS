#include<stdio.h>
#include<stdlib.h>


int Cuadrado (int num);
void CuadradoTipoVoid (int num);
void MostrarDireccionYContenido( int *punt);
void Invertir( int *a, int *b);
void orden(int *a, int *b);


int main(){

    int num1, num2, a, b;
    printf("\n\n\nPor favor Ingrese un numero: \n");
    scanf("%d",&num1);


    /* Funcion con Retorno */
        num2 = Cuadrado(num1);    
        printf("El resultado de elevar ese numero al cuadrado es: %d \n\n", num2);
    /* ----------------------- */

    /* Funcion sin Retorno */
        CuadradoTipoVoid(num1);
    /* ----------------------- */



    /* Funcion para mostrar el contenido y la direccion de la variable */
        MostrarDireccionYContenido( &num1 );
    /* ----------------------- */
    

    /* Funcion Para intercambiar el valor de las varaibles */
        printf("Por favor ingrese un valor para la variable a: \n");
        scanf("%d", &a);
        
        printf("Por favor ingrese un valor para la variable b: \n");
        scanf("%d", &b);

        Invertir(&a, &b);

        printf("El valor de la variable a es: %d \n\n", a);
        printf("El valor de la variable b es: %d \n\n", b);
    /* ----------------------- */

    /* Funcion que devuelve el valor mas alto en la variable a, y el valor mas bajo en la variable b */
        orden(&a, &b);
        printf("La variable con el valor mas pequenio es %d \n\n", a);
        printf("La variable con el valor mas GRANDE es %d \n\n", b);
    /* ----------------------- */
    return 0;
}


/* a) Haga una función que devuelva el cuadrado de un número */
int Cuadrado (int num){
    return num * num;
}


/* b) Haga la función anterior, pero devolviendo un tipo void */
void CuadradoTipoVoid (int num){
    int resultado;
    /*  resultado = num * num; */
    printf("El resultado de elevar ese numero al cuadrado es: %d \n\n", (num * num));
    
}

/* Al recibir una variable muestre por pantalla la dirección y el contenido de la variable */
void MostrarDireccionYContenido( int *punt){
    printf("La direccion de memoria de la varialbe ingresada es: %d \n", punt);
    printf("\nLa variable ingresada tiene el valor de: %d \n\n", *punt);
   /*  printf("\nLa direccion de memoria del puntero es: %d", &punt); */
}


/*  d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.  */
void Invertir( int *a, int *b) //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
{
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;   
}

/* e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. */
void orden(int *a, int *b) //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande
{
    int auxiliar;
    if (*a > *b)
    {
        auxiliar = *b;
        *b = *a;
        *a = auxiliar;
    }
}