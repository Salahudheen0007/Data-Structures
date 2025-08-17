#include<stdio.h>
#include<stdlib.h>
struct card {
    int value;
    int shape;
    int colour;

};
int main(){
    struct card d[2];
    d[0].value = 2;
    d[0].shape= 1;
    d[0].colour = 3;
    printf("%d",d[0].value);
   struct card deck[5] = {{2,1,3},{2,2,2}};
    printf("hello world");
    
    }