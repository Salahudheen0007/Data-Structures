#include<stdio.h>
#include<stdlib.h>
struct card {
    int value;
    int shape;
    int colour;

};
int main(){
    struct card d[5];
    d[0].value = 2;
    d[0].shape= 1;
    d[0].colour = 3;
    printf("%d",d[0].value);
    struct card deck[2] = {{2,1,3},{2,2,2}};
    printf("hello world");
    printf("%d",deck[0].colour);
    printf("%d",d[0].shape);
    struct card aa[3] = {{9,99,9},{5,5,5}};
    printf("%d",aa[0].colour);
    printf("\n");
    struct card aaa[3] = {{8,88,8},{4,4,4}};
    printf("%d",aaa[1].colour);
    }