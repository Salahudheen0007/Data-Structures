//finding the duplicate elements in a sorted array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[20] = {3,6,8,8,10,12,15,15,15,20};
    int n = 10;
    int i;
    /*int lastdup = 0;
    for(i=0;i<n;i++){
        if(A[i] == A[i+1]  && lastdup != A[i] ){
            printf("%d\n",A[i]);
            lastdup = A[i];

          }
    }*/
    //counting dup
    
    for(i=0;i<n;i++){
        if(A[i] == A[i+1]){
            int j = i+1;
            while(A[i] == A[j]) j++;
            printf("%d apperaring %d times\n",A[i],j-i);
            i = j-1;

            
    }
}
}