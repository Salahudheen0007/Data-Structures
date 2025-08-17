//find MIN and MAX in a single scan
#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[15] = {4,1,-3,8,10,6,9,7,2,3};
    int n = 10;
    int i;
    int max,min;
    max = A[0];
    min = A[0];
    for(i=1;i<n;i++){
        if(A[i] > max)
            max = A[i];
        else if(A[i]< min)
            min = A[i];
    }
    printf("max in %d   and min is %d  ",max,min);
}
