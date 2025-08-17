//to find dup in the string
#include<stdio.h>
#include<stdlib.h>
int main(){
    char A[] = "finding";
    int i;
    for(i=0;A[i]!='\0';i++){
        int j;
        j = i+1;
        for(;A[j]!='\0';j++){
            if(A[i] == A[j])
                printf("dup is %c\n",A[i]);
        }
    }
}