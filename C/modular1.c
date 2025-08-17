#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle r1){
    return r1.length*r1.breadth;
    }
int perimeter(struct rectangle r1){
    int p;
    p = 2*(r1.length+r1.breadth);
    return p;
}    
int main(){
    struct rectangle r = {0,0};
    printf("enter the length and breadth");
    scanf("%d%d",&r.length,&r.breadth);
    int A = area(r);
    int P = perimeter(r);
    printf("%d\n%d",A,P);

}