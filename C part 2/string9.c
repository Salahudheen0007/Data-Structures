//to check pallindrome 
#include<stdio.h>
#include<stdlib.h>
int main(){
    char A[] = "madm";
    char B[6];
    int i;
    for(i=0;A[i]!='\0';i++){
    }
    i = i-1;
    int j;
    for(j=0;i>=0;i--,j++){
        B[j] = A[i];
    }  
    B[j] = '\0';
    
    
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++){
        if(A[i]!=B[j])
            break;
    }
    
    if(A[i] == B[j]) printf("pallindrome");
    else printf("not");
}    