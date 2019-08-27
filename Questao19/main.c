#include <stdio.h>
#include <stdlib.h>

void multiplicacao(int** A,int** B,int** C, int la, int ca, int cb){
    int i,j,k;
    for(i=0;i<ca;i++){
        for(j=0;j<cb;j++){
            int aux=0;
            for(k=0;k<ca;k++){
                aux=aux+A[i][k]*B[k][j];
            }
            C[i][j]=aux;
        }
    }
}

int main()
{
    int i,j;
    int la,ca;
    int lb,cb;
    int **A;
    int **B;
    int **C;

    //escolher a dimensao dass matrizes
    printf("escolha o numero de linhas e colunas de A, respectivamente:");
    scanf("%d",&la);
    scanf("%d",&ca);
    printf("escolha o numero de linhas e colunas de B, respectivamente:");
    scanf("%d",&lb);
    scanf("%d",&cb);

    //alocando a memoria
    A = (int**) malloc(la*sizeof(int));
    B = (int**) malloc(lb*sizeof(int));
    C = (int**) malloc(ca*sizeof(int));

    for(i=0; i<la; i++){
        A[i] = malloc(ca*sizeof (int*));
    }
    for(i=0; i<lb; i++){
        B[i] = malloc(cb*sizeof (int*));
    }
    for(i=0; i<la; i++){
        C[i] = malloc(cb*sizeof (int*));
    }

    //receber os valores
    printf("digite os valores da matriz A: \n");
    for(i=0;i<la;i++){
        for(j=0;j<ca;j++){
            scanf("%d",&A[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    printf("digite os valores da matriz B: \n");
    for(i=0;i<lb;i++){
        for(j=0;j<cb;j++){
            scanf("%d",&B[i][j]);
            printf(" ");
        }
        printf("\n");
    }


    //fazer a multiplicação
    multiplicacao(A,B,C,la,ca,cb);

    //imprimir a matriz C
    printf("C: \n");
    for(i=0;i<la;i++){
        for(j=0;j<cb;j++){
            printf("%d",C[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
