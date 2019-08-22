#include <stdio.h>

int main()
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
      printf("\ni = %d",i); // Resultado: valor i
      printf("vet[%d] = %.1f",i, vet[i]); // Resultado: valor do vetor i
      printf("*(f + %d) = %.1f",i, *(f+i)); // Resultado: valor do ponteiro que é igual ao valor do vetor i
      printf("&vet[%d] = %X",i, &vet[i]); // Resultado: endereço do vetor i
      printf("(f + %d) = %X",i, f+i); // Resultado: endereço do ponteiro que é igual do vetor i
    }

    return 0;
}
