#include<stdio.h>
int main(){
    int A[5] = {1,2,3,4,5};
    int B[5] = {1,2};
    int C[5] = {0};
    int D[] = {1,3,4,5,6,7};
    int E[5];

    printf("%d\n",A[2]);
    printf("%d\n",2[A]);
    printf("%d\n",*(A+2));
    //printing the Adresses
    int i;
    for(i = 0;i<5;i++){
        printf("%d\n",&A[i]);
    }


}