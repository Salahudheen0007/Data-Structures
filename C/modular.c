#include<stdio.h>
int area(int l,int b){
    return l*b;
    }
int perimeter(int l,int b){
    int p ;
    p = 2*(l+b);
    return p;
}    
int main(){
    int length,breadth = 0;
    printf("enter the length and breadth");
    scanf("%d%d",&length,&breadth);
    int A = area(length,breadth);
    int P = perimeter(length,breadth);
    printf("%d\n%d",A,P);

}
