//static vs dynamic array 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[5] = {1,2,3,4,5};
    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 3;
    p[2] = 4;
    p[3] = 5;
    p[4] = 6;
    int i;
    for(i = 0;i<5;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    for(i = 0;i<5;i++){
        printf("%d ",p[i]);
    }


}