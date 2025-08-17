//counting duplicate elements in a sorted array using hashing table and same in unsorted array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[10] = {2,1,5,4,7,9,5,9,10};
    int H[100] = {0,0,0,0,0,0,0,0,0,0,0};
    int i;
    for(i=0;i<9;i++){
        H[A[i]]++;
    }
    for(i=0;i<=20;i++){
        if(H[i]>1) printf("%d  %d \n",i,H[i]);
    }
}