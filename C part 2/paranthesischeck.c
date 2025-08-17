#include<stdio.h>
#include<stdlib.h>
struct Stack{
    char data;
    struct Stack *next;
}*top = NULL;

void push(char x){
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
char pop(){
    struct Stack *t;
    char x = -1;
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
        printf("%c ",p->data);
        p = p->next;
    }printf("\n");
}

int isBalanced(char *exp1){
    int i;
    for(i=0;exp1[i]!='\0';i++){
        if(exp1[i] == '(')
            push(exp1[i]);
        else if(exp1[i] == ')'){
            if(top == NULL){
                return 0 ;
            }
            else{
                pop();
            }
        }    
            
    }
    if(top == NULL) return 1;
    else return 0;
}    
int main(){
   
    char *exp1  = "(((a+b)*(c-d))))";
    printf("%d ",isBalanced(exp1));
    
    return 0;
}