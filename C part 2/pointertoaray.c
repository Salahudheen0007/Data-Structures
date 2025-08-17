 #include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[5] = {1,2,3,4,5};
    int *p;
    p = A;
    //p = &A[0];
    for(int i = 0;i<5;i++){
        printf("%d",p[i]);
    }
    // in heap
    int *q;
    q = (int *)malloc(5*sizeof(int));
    q[0] = 2;
    q[1] = 1;
    q[2] = 5;
    q[3] = 7;
    q[4] = 9;
     for(int i = 0;i<5;i++){
        printf("%d",q[i]);
     }
    
        return 0 ;



}