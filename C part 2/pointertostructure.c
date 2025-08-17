#include<stdio.h>
#include<stdlib.h>
struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {3,4};
    struct Rectangle *p = &r;
    r.length = 15;
    printf("%d",r.length);
    p->length = 20;
    printf("%d",r.length);
    (*p).length = 25;
    printf("%d",r.length);

    //dynamically creating in heap memmory and pointing

    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length = 13;
    p1->breadth = 14;
    printf("%d%d",p1->length,p1->breadth);
}