#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float *x;
    int n; //tamanho do array
    int i;
    int j;

    printf("digite o tamanho do array \n");
    n = scanf("%d",&n);//recebe o tamanho do array
    printf("%d",n);

    //aloca memoria para o array
    x=(float*) malloc(n*sizeof(float));//aloca memoria para o array

    //leitura dos valores
    printf("digite os valores \n");
    for(i=0;i<n;i++){
        scanf("%f", &x[i]);
    }

    //imprime o array desordenado
    for(i=0;i<n;i++){
        printf("%f ", x[i]);
    }
    printf("\n");

    //ordenação
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            float aux;
            if(x[j]>x[j+1]){
                aux=x[j+1];
                x[j+1]=x[j];
                x[j]=aux;
            }
        }
    }

    //imprime o array ordenado
    for(i=0;i<n;i++){
        printf("%f ",x[i]);
    }

    free(x);

    return 0;
}
