//taylor series
#include<stdio.h>
double fun1(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r = fun1(x,n-1);
        p = p*x;
        f = f*n;
        return r+p/f;

    }
}
int main(){
    printf("%f",fun1(4,10));
}