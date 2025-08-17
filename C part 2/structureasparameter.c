#include<stdio.h>
// call by value
struct Rectangle{
    int length;
    int breadth;

};
int area(struct Rectangle rect){
    return rect.length*rect.breadth;
}
int main(){
    struct Rectangle r1 = {10,5};
    printf("%d",area(r1));

}