#include<stdio.h>
#include<stdlib.h>
 void set(int A[],int i,int j,int x){
    if(i==j)
        A[i-1] = x;
 }
 int get(int A[],int i,int j){
    if(i==j)
        return A[i-1];
    else
        return 0;
 }
 void display(int A[]){
    int i;
    int j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            if(i==j){
                printf("%d ",A[i]);
            }
            else{
                printf("0 ");
            }

        }printf("\n");
    }
 }
 int main(){
    int A[10];
    set(A,1,1,2);
    set(A,2,2,3);
    set(A,3,3,4);
    set(A,4,4,5);
    display(A);
    printf("\n %d ",get(A,1,1));
    printf("\n %d ",get(A,1,3));

 }