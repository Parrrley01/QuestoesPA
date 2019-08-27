#include <stdio.h>
#include <stdlib.h>

int compar(float *a, float *b) {
    if (*(int*)a == *(int*)b) {
        return 0;
    } else if (*(int*)a < *(int*)b) {
        return -1;
    } else {
        return 1;
    }
}

int main()
{
    int n;
    float t; //tamanho do array

    printf("Digite o tamanho do array: ");
    scanf("%d",&n);//recebe o tamanho do array

    float *x= (float*) malloc(n*sizeof(float));//aloca memoria para o array

    //leitura dos valores
    printf("Digite os valores:\n");
    for(int i=0;i<n;i++){
        scanf("%f", &x[i]);
    }

    printf("Array desordenado\n");
    for(int i=0;i<n;i++){
        printf("%.2f ", x[i]);
    }
    printf("\n");

    for (int i=0; i<(n-1); i++){
      for (int j=(i+1); j<n; j++){
        if(compar(&x[i],&x[j])>0){
          t = x[i];
          x[i] = x[j];
          x[j] = t;
        }
      }
    }

    printf("Array ordenado\n");
    for(int i=0;i<n;i++){
        printf("%.2f ",x[i]);
    }

    printf("\n");

    free(x);

    return 0;
}
