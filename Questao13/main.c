#include <stdio.h>

void trocar(int *a, int *b) {
    int troca;

    troca = *a;
    *a = *b;
    *b = troca;
}

int main()
{
    /* Ponteiros como argumento de função serve para definir, durante o tempo de execução,
     * qual função será executada, sem a necessidade de ter que declarar o nome dela de forma explícita.
     * Além disso, o seu uso também incluem funções que devem retornar mais de um valor e a passagem de
     * arranjos para funções. */

    int a, b;

    a = 10;
    b = 20;

    printf("Antes: a=%d, b=%d\n", a, b);
    trocar(&a, &b);
    printf("Depois: a=%d, b=%d\n", a, b);
}
