#include<stdio.h>
#include<stdlib.h>
int main(){
    char X[] = "welcome";
    char A[] = {67,68,69};
    int i;
    for(i=0;X[i]!='\0';i++){
        X[i] = X[i]-32;
        //to change to lower add 32 to upper
    }
    printf("%s\n",X);
    printf("%s",A);
}