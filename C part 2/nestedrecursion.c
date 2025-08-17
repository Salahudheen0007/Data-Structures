#include<stdio.h>
int fun1(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun1(fun1(n+11));
    }
}
int main(){
    int x = 95,r;
    r = fun1(95);
    printf("%d",r);
    return 0;
}