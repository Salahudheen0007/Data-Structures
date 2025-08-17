//sum of natural numbers
#include<stdio.h>
int fun1(int x){
    if(x==0){
        return 0;
    }
    else{
        return (fun1(x-1)+x);
    }
    }
int main(){
    int r;
    r = fun1(5);
    printf("%d",r);
    return 0;
}