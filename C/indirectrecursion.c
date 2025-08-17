#include<stdio.h>
void fun2(int y);
void fun1(int x){
    if(x>0){
        printf("%d   ",x);
        fun2(x-1);
    }
}
void fun2(int n){
    if(n>1){
        printf("%d   ",n);
        fun1(n/2);
    }
}
int main(){

    fun1(20);
    return 0;
}