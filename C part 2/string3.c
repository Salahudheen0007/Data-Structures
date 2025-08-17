//toggling means upper to lower and lower to upper
#include<stdio.h>
#include<stdlib.h>
int main(){
    char X[] = "wElcOmE";
    int i;
    for(i=0;X[i]!='\0';i++){
        if(X[i]>=65 && X[i]<=90)
            X[i] += 32;
        else if(X[i] >= 'a' && X[i] <=122)
            X[i]-=32;
    }
    printf("%s",X);
    return 0;
}    