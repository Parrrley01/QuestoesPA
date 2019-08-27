#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    // p retorna o endereço de i em hexadecimal.
    // *p+2 retorna 7.
    // **&p retorna 5.
    // 3**p retorna 15.
    // **&p+4 retorna 9.

    return 0;
}
