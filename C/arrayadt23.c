//find the pair of number have sum k using hash table unsorted array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[15] = {6,3,8,10,16,7,5,2,9,14};
    int H[17] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i;
    int k = 10;
    int n = 10;
    for(i=0;i<n;i++){
        if(H[k-A[i]]!= 0){
           // printf("%d\n" , H[k-A[i]]);
            printf("%d + %d = %d \n",A[i],k-A[i],k);
        }    
        H[A[i]]++;

    }
}  