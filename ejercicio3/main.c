#include <stdio.h>

int mcm(int, int);

int main(){
    /* Declaremos variables */
    int primero, segundo;
    int resultado;

    /* Se solicita al usuario que introduzca el valor de M */
    printf("Ingrese el valor de M: ");
    scanf("%d", &primero);

    /* Se solicita al usuario que introduzca el valor de M */
    printf("Ingrese el valor de N: ");
    scanf("%d", &segundo);

    /* Si N es mayor que M */
    if (segundo > primero ){
        resultado = mcm(segundo,primero);
    } else { /* De lo contrario */
        resultado = mcm(primero,segundo);
    }

    /* Ahora imprimimos el resultado */
    printf("El MCM de %d y %d es: %d", primero, segundo, resultado);

    /* Retornamos 0 para indicar que todo esta bien */
    return 0;
}

int mcm(int m, int n) {
    if (n == 0) return m; // Condicion de parada
    return mcm(n, m%n);   // Llamada recursiva
}