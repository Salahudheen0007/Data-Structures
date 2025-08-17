#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int data;
    struct Stack *next;
}*top = NULL;

void push(int x){
    struct Stack *t;
    t = (struct Stack *)malloc(sizeof(struct Stack));
    if(t==NULL){
        printf("stack is full");
        return;
    }
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop(){
    struct Stack *t;
    int x = -1;
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        t = top;
        top = top->next;
        x = t->data;
        free(t);
        
    }
    return x;
}
void Display(){
    struct Stack *p;
    p = top;
    while(p){
        printf("%d ",p->data);
        p = p->next;
    }printf("\n");
}
int main(){
    push(10);
    push(20);
    push(30);
    Display();
    printf("%d ",pop());
    
    
    
    return 0;
}