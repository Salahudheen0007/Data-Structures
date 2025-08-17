#include<stdio.h>
//faster model
int fun2(int m,int x){
    if((x%2)==0){
        return fun2(m*m,x/2);
        
    }
    else
        return 1;
    
}
void main(){
    int p;
    p = fun2(3,8);
    printf("%d",p);
    
}