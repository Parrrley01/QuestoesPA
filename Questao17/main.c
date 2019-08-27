#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar(float *a, float *b){
  return ( *(int*)a - *(int*)b );
}


void ord15(float *x, int n) { // Ordenação da questão 15

    qsort(x,n,sizeof(float),comparar);

    printf("Array ordenado (questao 15) \n");
    for(int i=0;i<n;i++){
        printf("%.2f ",x[i]);
    }

    printf("\n");
}

int compar(float *a, float *b) {
    if (*(int*)a == *(int*)b) {
        return 0;
    } else if (*(int*)a < *(int*)b) {
        return -1;
    } else {
        return 1;
    }
}

void ord16(float *x, int n){ // Ordenação da questão 16
    float t;

    for (int i=0; i<(n-1); i++){
      for (int j=(i+1); j<n; j++){
        if(compar(&x[i],&x[j])>0){
          t = x[i];
          x[i] = x[j];
          x[j] = t;
        }
      }
    }

    printf("Array ordenado (questao 16) \n");
    for(int i=0;i<n;i++){
        printf("%.2f ",x[i]);
    }

    printf("\n");
}

int main()
{
    int n;
    double tempoDefinitivo;
    clock_t tempo0, tempo1;

    printf("Digite o tamanho do array: ");
    scanf("%d",&n);

    float *x= (float*) malloc(n*sizeof(float));

    printf("Digite os valores:\n");
    for(int i=0;i<n;i++){
        scanf("%f", &x[i]);
    }

    printf("Array desordenado\n");
    for(int i=0;i<n;i++){
        printf("%.2f ", x[i]);
    }
    printf("\n");

    tempo0 = clock();
    ord15(x, n);
    tempo1 = clock();
    tempoDefinitivo = (double)(tempo1 - tempo0)/(double) CLOCKS_PER_SEC;
    printf("Tempo (em segundos) da ordenacao 15: %g", tempoDefinitivo);
    printf("\n");
    tempo0 = clock();
    ord16(x, n);
    tempo1 = clock();
    tempoDefinitivo = (double)(tempo1 - tempo0)/(double) CLOCKS_PER_SEC;
    printf("Tempo (em segundos) da ordenacao 16: %g \n", tempoDefinitivo);

    free(x);

    return 0;
}
