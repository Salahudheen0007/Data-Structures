#include<stdio.h>
#include<stdlib.h>
int * fun(int size){
    int *P;
    P = (int *)malloc(size*sizeof(int));
    for(int i = 0;i<size;i++){
    P[i]  = i+1;
    }
    return P;
}
int main(){
    int *ptr;
    int sz = 7;
    ptr = fun(sz);
    for(int i = 0;i<sz;i++){
        printf("%d\n",ptr[i]);
    }

}