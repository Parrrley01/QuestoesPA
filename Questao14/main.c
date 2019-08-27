#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float *x;
    int n, i, j, aux;
    printf("Digite o tamanho do array: ");
    scanf("%d",&n);//recebe o tamanho do array

    //aloca memoria para o array
    x=(float*) malloc(n*sizeof(float));

    //leitura dos valores
    printf("Digite os valores:\n");
    for(i=0;i<n;i++){
        scanf("%f", &x[i]);
    }

    //imprime o array desordenado
    printf("Array desordenado\n");
    for(i=0;i<n;i++){
        printf("%f ", x[i]);
    }
    printf("\n");

    //ordenação
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(x[j]>x[j+1]){
                aux=x[j+1];
                x[j+1]=x[j];
                x[j]=aux;
            }
        }
    }

    //imprime o array ordenado
    printf("Array ordenado\n");
    for(i=0;i<n;i++){
        printf("%f ", x[i]);
    }

    printf("\n");

    free(x);

    return 0;
}
