#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcao para estabelecer o parametro para o ordenamento, ou seja, a diferença entre o numero e seu posterior. Se o valor retornado for positivo a função trocara os dois de posicao.
int comparar (const void *a, const void *b){
  return ( *(float*)a - *(float*)b );
}


int main()
{
    int n; //tamanho do array

    printf("digite o tamanho do array \n");
    scanf("%d",&n);//recebe o tamanho do array

    float *x= (float*) malloc(n*sizeof(float));//aloca memoria para o array

    //leitura dos valores
    printf("digite os valores \n");
    for(int i=0;i<n;i++){
        scanf("%f", &x[i]);
    }

    //imprime o array desordenado
    for(int i=0;i<n;i++){
        printf("%.2f ", x[i]);
    }
    printf("\n");

    //utilizamos a função qsort para ordenar o array
    qsort(x,n,sizeof(float),comparar);

    //imprime o array ordenado
    for(int i=0;i<n;i++){
        printf("%.2f ",x[i]);
    }

    free(x);

    return 0;
}
