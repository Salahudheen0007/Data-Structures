//2D array

#include<stdio.h>
#include<stdlib.h>

int main(){
    //full stack/normal initiation and declaration
    int A[3][4]  =  {{1,2,3,4},{3,4,5,6},{5,6,7,8}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[i][j]);
        }printf("\n");
    }
    //partial stack and partial heap
    int *B[3];
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",B[i][j]);
        }printf("\n");
    }
    //full heap
    int **C;
    C = (int **)malloc(sizeof(int *));
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",C[i][j]);
        }printf("\n");
    }

    
}