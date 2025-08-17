#include<stdio.h>
fun1(int x){
    if(x>0){
        printf("%d",x);
        fun1(x-1);
    }
}
void main(){
    int x = 3;
    fun1(3);
}