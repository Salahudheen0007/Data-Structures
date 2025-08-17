//factorial
#include<stdio.h>
int fn1(int x){
    if(x==0){
        return 1;
    }
    else{
        return (fn1(x-1)*x);
    }
}
//loop
int fn2(int n){
    int i;
    int f = 1;
    for(i=1;i<=n;i++){
        f = f*i;
    }
    return f;
}
int main(){
    int r;
    r = fn1(5);
    printf("%d\n",r);
    int p;
    p = fn2(5);
    printf("%d",p);
    return 0;
}