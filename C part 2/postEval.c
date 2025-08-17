#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int Eval(char *postfix){
    int i = 0;
    int x1,x2,r;
    for(i = 0;postfix[i]!='\0';i++){
        if(isOperant(postfix[i])){
            push(postfix[i]-'0');
        }
        else{
            x2  = pop();
            x1 = pop();
            switch(postfix[i]){
                case '+' : r = x1+x2; break;
                case '-' : r = x1-x2; break;
                case '*' : r = x1*x2; break;
                case '/' : r = x1/x2; break;
                
            }
            push(r);
        }
    }
    return top->data;
    
}
int main(){
   
    char *postfix = "234*+82/-";
    printf("%d ",Eval(postfix));
    
    
    return 0;}