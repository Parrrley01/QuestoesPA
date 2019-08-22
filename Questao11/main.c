#include <stdio.h>

int main()
{
    int x;

    x = 4092;

    printf("Declaracao de x para char x+1 = %d\n", x+(1*1));
    printf("Declaracao de x para char x+2 = %d\n", x+(2*1));
    printf("Declaracao de x para char x+3 = %d\n\n", x+(3*1));

    printf("Declaracao de x para int x+1 = %d\n", x+(1*2));
    printf("Declaracao de x para int x+2 = %d\n", x+(2*2));
    printf("Declaracao de x para int x+3 = %d\n\n", x+(3*2));

    printf("Declaracao de x para float x+1 = %d\n", x+(1*4));
    printf("Declaracao de x para float x+2 = %d\n", x+(2*4));
    printf("Declaracao de x para float x+3 = %d\n\n", x+(3*4));

    printf("Declaracao de x para double x+1 = %d\n", x+(1*8));
    printf("Declaracao de x para double x+2 = %d\n", x+(2*8));
    printf("Declaracao de x para double x+3 = %d\n\n", x+(3*8));

    return 0;
}
