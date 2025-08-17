#include<stdio.h>
fun1(int x){
    if(x>0){
        fun1(x-1);
        printf("%d",x);
        
    }
}
void main(){
    int x = 3;
    fun1(3);
}