#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node{
    int coeff;
    int exp1;
    struct Node *next;
} *poly  = NULL;

void Create(){
    struct Node *t,*last = NULL;
    int num,i;
    printf("enter the number of terms\n");
    scanf("%d",&num);
    printf("enter the coeff and exp of each term\n");
    for(i=0;i<num;i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d%d",&t->coeff,&t->exp1);
        t->next = NULL;
        if(poly == NULL){
            poly = last = t;
        }
        else{
            last->next = t;
            last = t;
            
        }
    }
    
}
void Display(struct Node *p){
    while(p){
        printf("%d x %d +",p->coeff,p->exp1);
        p = p->next;
    }printf("\n");
     
}
long Eval(struct Node *p,int x){
    long val;
    while(p){
        val+=p->coeff*pow(x,p->exp1);
        p = p->next;
    }
    return val;
}
int main(){
    Create();
    Display(poly);
    printf("%ld",Eval(poly,1));
    return 0;
}