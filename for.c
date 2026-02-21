#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, suma = 0, valor;

    printf("Ingrese la cantidad de numeros a sumar:  ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &valor);
        suma += valor;
    }

    printf("La suma total es: %d\n", suma);

    return 0;
}
