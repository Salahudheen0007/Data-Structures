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

int pre(char x){
    if(x == '+' || x == '-') return 1;
    else if(x == '*' || x == '/') return 2;
    return 0;
}
int isOperant(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}
char * inftopost(char *infix){
    int i =0,j=0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len+2)*sizeof(char));
    while(infix[i]!='\0'){
        if(isOperant(infix[i])){
            postfix[j++] = infix[i++];
        }
        else{
            if(pre(infix[i])>pre(top->data)){
                push(infix[i++]);
            }
            else{
                postfix[j++] = pop();
            }
        }
    }
    while(top !=NULL){
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}
int main(){
   
    char *infix  ="a+b*c-d/e";
    push('#');
    char *postfix = inftopost(infix);
    printf("%s ",postfix);
    
    
    return 0;
}