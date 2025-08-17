//combination formula or selecion formuala nCr
#include<stdio.h>
//iterative
int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}
//iterative
int fun1(int n,int r){
    int den,num;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}
//recursive using pascals traingle
int fun2(int n,int r){
    if(n==r || r ==0)
        return 1;
    return fun2(n-1,r-1)+fun2(n-1,r);
}
int main(){
    printf("%d",fun2(5,2));
    return 0;
}