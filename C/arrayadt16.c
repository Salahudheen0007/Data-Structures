//finding missing method 2 in sorted array
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int A[100];
    
     printf("elements");
     int i;
     for(i=0;i<n;i++){
         scanf("%d",&A[i]);
     }
    int diff = A[0] - 0;
    printf("%d",diff);
    for(i=0;i<n;i++){
        if(A[i]-i != diff){
            printf("missing element is %d",i+diff);
            break;
    }}
}