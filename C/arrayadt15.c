//findin the missing element in tthe array (sorted)
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
    int sum = 0;
    
    for(i=0;i<n;i++){
        sum = sum+A[i];
    }
    int s =(n*(n+1))/2;
    printf("%d",sum-s);
}