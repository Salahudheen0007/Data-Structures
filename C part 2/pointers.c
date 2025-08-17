#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 10;
    int *p;
    p = &a;
    printf("%d",a);
    printf("%d",*p);
    int *r;
    r = (int *)malloc(5*sizeof(int));
    printf("%d%d",p,&a);
   
}