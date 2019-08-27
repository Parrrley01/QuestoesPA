#include <stdio.h>

int main()
{
    //Imprime o valor de cada posição do vetor.
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
      printf("%d ",*(vet+i));
    }

    //Imprime o endereço em hexadecimal de cada posição do vetor.
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
      printf("%X ",vet+i);
    }

    return 0;
}
