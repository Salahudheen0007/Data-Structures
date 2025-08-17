//finding dup in unsorted
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[15] = {8,3,6,4,6,5,6,8,2,7};
    int n = 10;
    int i,j;
    for(i=0;i<n-1;i++){
        int count = 1;
        if(A[i]!= -1){
            for(j=i+1;j<n;j++){
                if(A[i] == A[j]){
                    count++;
                    A[j] = -1;
                }
            }
            if(count>1) printf("%d  %d\n",A[i],count);
        }
    }
}