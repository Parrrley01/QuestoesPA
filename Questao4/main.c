#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    int *p, *q;

    p = i; // Ilegal pois o ponteiro deve receber o endereço da variável e não o valor dela.
    q = &j;
    p = &*&i;
    i = (*&)j; // Ilegal pois essa expressão só tem valor lógico quando colocada junto de uma variável.
    i = *&j;
    i = *&*&j;
    q = *p; // Ilegal pois o ponteiro deve receber o endereço da variável e não o valor dela.
    i = (*p)++ + *q;

    return 0;
}
