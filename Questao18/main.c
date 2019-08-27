#include <stdio.h>
#include <stdlib.h>

void soma(int* v1,int* v2,int* v3, int n){
    for(int i=0;i<n;i++){
        v3[i]=v1[i]+v2[i];
    }
}

int main()
{
    int i,n;
    int *v1;
    int *v2;
    int *v3;

    //escolher o numero de elementos do vetor
    printf("Escolha o numero de elementos dos vetores: \n");
    scanf("%d",&n);

    //alocando a memoria
    v1 = malloc(n*sizeof(int));
    v2 = malloc(n*sizeof(int));
    v3 = malloc(n*sizeof(int));

    //receber os valores
    printf("Digite os valores do vetor 1: \n");
    for(i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }

    printf("Digite os valores do vetor 2: \n");
    for(i=0;i<n;i++){
        scanf("%d",&v2[i]);
    }

    //fazer a soma
    soma(v1,v2,v3,n);

    //imprimir o vetor 3
    printf("Valores do vetor 3: \n");
    for(i=0;i<n;i++){
        printf("%d ",v3[i]);
    }
    return 0;
}
