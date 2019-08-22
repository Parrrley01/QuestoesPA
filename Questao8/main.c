#include <stdio.h>

int main()
{
    p = mat + 1; // É válido, ponteiro está recebendo o endereço da matriz na posição 1
    p = mat++;
    p = ++mat;
    x = (*mat)++; // É válido, pois a matriz sofre uma conversão, diferente do que não acontece nos dois exemplos anteriores

    return 0;
}
