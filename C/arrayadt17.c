//find multiple missing elements in the array
#include<stdio.h>
#include<stdlib.h>
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
    int diff;
    diff = A[0] - 0;
    for(i=0;i<n;i++){
        if(A[i]-i != diff){
            while(diff < (A[i]-i))
            {
                printf("missing element is %d\n",i+diff);
                diff++;
                
            }    
         }
        
    }
}