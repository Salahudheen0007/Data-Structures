//reversing the string 
//method 1
#include<stdio.h>
#include<stdlib.h>
int main(){
    char A[] = "welcome";
    char B[7];
    int i;
    for(i=0;A[i]!='\0';i++){
    }
    i = i-1;
    int j;
    for(j=0;i>=0;i--,j++){
        B[j] = A[i];
    }  
    B[j] = '\0';
    printf("%s",B);
}

