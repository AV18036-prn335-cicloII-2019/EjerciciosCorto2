#include <stdio.h>


void intercambiarVariable(int *firstpuntero, int *secondtpuntero){
/**
 * Aca realizamos la suma del primer puntero con el segundo puntero y lo insertamos en la variable asignada
 */
    *firstpuntero=*firstpuntero+*secondtpuntero;
    /**
     * Aca realizamos la resta del primer con el segundo puntero y lo insertamos en la variabl asignada
     */
    *secondtpuntero=*firstpuntero-*secondtpuntero;
    /**
     * Realizar el valor de ambos punteros y guardarlo en el first puntero
     */
    *firstpuntero=*firstpuntero-*secondtpuntero;
}

int main(){
    int a;
    int b;
    /**
     * Declaracion y guardado de las variables
     */
    printf("Ingrese el valor de la variable a que usted desee: \n");
    scanf("%d",&a);
    printf("Ingrese el valor de la variable b que usted desee: \n");
    scanf("%d",&b);

    intercambiarVariable(&a,&b);
/**
 * Impresion de las variables con sus valores ya modificados
 */
    printf("El valor de a es %d\n", a);
    printf("El valor de b es %d\n", b);


    return 0;
}
