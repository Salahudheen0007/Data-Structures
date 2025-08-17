//find the pair of number have sum k unsorted
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[15] = {6,3,8,10,16,7,5,2,9,4};
    int i,j;
    int k = 10;
    int n = 10;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(A[i] + A[j] == k){
                printf("%d +  %d = %d\n",A[i],A[j],k);

            }
        }

    }
}