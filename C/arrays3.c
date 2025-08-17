//increasig the sizse of the array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 3;
    p[2] = 4;
    p[3] = 5;
    p[4] = 6;
    int *q;
    q = (int *)malloc(10*sizeof(int));
    int i;
    for(i = 0;i<5;i++){
        q[i] = p[i];
    }
    free(p);
    p = q;
    q = NULL;
    for(i = 0;i<10;i++){
        printf("%d  ",p[i]);
    }
    

}