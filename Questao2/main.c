#include <stdio.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    p == &i; //Resposta: 1
    *p - *q; //Resposta: -2
    **&p; //Resposta: 3
    3 - *p/(*q) + 7; //Resposta: 10

    return 0;
}
