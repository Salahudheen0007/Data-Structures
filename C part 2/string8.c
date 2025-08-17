//comparing 2 strings
#include<stdio.h>
#include<stdlib.h>
int main(){
    char A[] = "painter";
    char B[] = "painting";
    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++){
        if(A[i]!=B[j])
            break;
    }
    if(A[i] == B[j]) printf("same");
    else if(A[i]>B[j]) printf("greater");
    else printf("smaller");
}   