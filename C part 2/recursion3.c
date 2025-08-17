//power of number
#include<stdio.h>
int fun1(int m,int x){
    if(x==0)
        return 1;
    else{
        return (fun1(m,x-1)*m);
    }
}
//faster model
int fun2(int m,int x){
    if(x==0)
        return 1;
    else if(x%2==0){
        return fun2(m*m,x/2);
    }
    else{
    return (m*fun2(m*m,(x-1/2)));
    }
}
int main(){
   int p = fun1(2,8);
    printf("%d",p);
  
   int q = fun2(2,8);
    printf("%d",q);
      return 0;
}