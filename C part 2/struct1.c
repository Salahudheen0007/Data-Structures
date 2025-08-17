#include<stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
struct Student {
    int rollno;
    char name[20];
};


int main(){
    struct Rectangle r;
    r.length = 10;
    r.breadth = 20;
    printf("%d",r.length*r.breadth);
    printf("\n");
    struct Rectangle R = {15,20};
    printf("%d",R.length);
    R.length = 25;
    R.breadth = 30;
    printf("%d",R.length*R.breadth);
    struct Student s = {10,"john"};
    printf("%c",s.name);
}