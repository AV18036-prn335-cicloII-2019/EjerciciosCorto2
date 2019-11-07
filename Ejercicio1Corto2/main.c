#include <stdio.h>
#include <math.h>

int cambioVariable(int, int);

int main()
{
    int decimalvar;
    /**
     * Pedimos al usuario que ingrese el numero en forma Binaria que desea transformar
     */
    printf("Ingrese el numero en forma Binaria que desea convertir :\n");
    /**
     * Guardamos el valor del numero ingresado
     */
    scanf("%d",&decimalvar);
    /**
     * Imprimimos el numero ya convertido a decimal
     */
    printf("El numero Binario que ha sido ingresado ya convertido a decimal : %d", cambioVariable(decimalvar, 0));
    return 0;
}
/**
 * metodo para hacer la conversion del numero
 * @param decimalvar
 * @param t
 * @return
 */
int cambioVariable(int decimalvar, int t){
    int dato = t;
    if(decimalvar==0){
        return 0;
    } else {
        return (((decimalvar%10) * pow(2, dato)) + cambioVariable((decimalvar/10), ++dato));
    }
}
