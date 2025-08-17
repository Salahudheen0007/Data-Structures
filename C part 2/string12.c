//finding the duplicates using bitwise operator
#include<stdio.h>
#include<stdlib.h>
int main(){
    char A[] = "finding";
    int H = 0;
    int x=0;
    int i;
    for(i=0;A[i]!='\0';i++){
        x = 1;
        x = x<<(A[i] - 97);
        if((x&H)>0){
            printf("%c is a dup\n",A[i]);
        }    
        else{
            H= x|H;
        }

    }
}