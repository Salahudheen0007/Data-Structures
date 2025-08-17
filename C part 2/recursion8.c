//fibonacci
//iteratice
#include<stdio.h>
int fun1(int n){
    int t0 = 0,t1 = 1,s = 0,i;
    if(n<=1)
        return n;
    for(i =2;i<=n;i++){
        s  = t0+t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
//recursive
int fun2(int n){
    if(n<=1)return n;
    return fun2(n-2)+fun2(n-1);
}
//recursive using memoization
int F[10];
int fun3(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = fun3(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = fun3(n-1);
        }
        F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }

}
int main(){
    int i;
    for(i=0;i<10;i++){
        F[i] = -1;
    }
    printf("%d",fun3(5));
    return 0;
}