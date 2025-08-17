#include<stdio.h>
#include<stdlib.h>
int main(){
    char X[] = "how are you";
    int i;
    int vcount,ccount = 0;
    //to count vowels and consonents
    for(i=0;X[i]!='\0';i++){
        if((X[i] == 'a') || (X[i] == 'e') || (X[i] == 'i') || (X[i] =='o') || (X[i] == 'u') || (X[i] =='A') || (X[i] == 'E') || (X[i] == 'I') || (X[i] == 'O') || (X[i] == 'U'))
            vcount++;
        else if(((X[i] >= 'A') && (X[i] <= 'Z' )) || ((X[i] >= 'a') && (X[i] <= 'z')))
            ccount++;
    }
    printf("%d\n",vcount);
    printf("%d",ccount);
    //counting the  number of words
    int word = 1;
    for(i=0;X[i]!='\0';i++){
        if((X[i] == ' ') && (X[i-1]!=' '))
            word++;
    }    
    printf("no of words is %d",word);     
    return 0;
}