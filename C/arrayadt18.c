//finding missing element in unsorted array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[200] = {3,5,8,2,12,11,7,1,9};
    int H[100]  = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i,l,h,n;
    l = 1;
    h = 12;
    n = 9;
    for(i=0;i<n;i++){
        H[A[i]]++;
    }
    for(i=0;i<13;i++){
        if(H[i] == 0){
             printf("%d  ",i);
    }
}
}
