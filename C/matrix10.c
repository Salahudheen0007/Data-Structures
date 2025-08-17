//polynomial representation 
#include<stdio.h>
#include<stdlib.h>
struct Term {
    int coeff;
    int expo;
    
};

struct poly{
    int n;
    struct Term *terms;
    
};
void create(struct poly *p){
    printf("enter the number of terms\n");
    scanf("%d",&p->n);
    p->terms = (struct Term *)malloc(p->n*sizeof(struct Term));
    int i;
    printf("enter the elemnts\n");
    for(i=0;i<p->n;i++){
        printf("term no %d",i+1);
        scanf("%d%d",&p->terms[i].coeff,&p->terms[i].expo);
        
    }
    
}
void display(struct poly p){
    int i;
    for(i=0;i<p.n;i++){
        printf("%dx%d+",p.terms[i].coeff,p.terms[i].expo);
    }
}
struct poly * add(struct poly *p1,struct poly *p2){
    int i,j,k;
    struct poly *sum;
    sum = (struct poly *)malloc(sizeof(struct poly));
    sum->terms = (struct Term *)malloc((p1->n + p2->n )*sizeof(struct Term));
    i = j = k = 0;
    while(i<p1->n && j<p2->n){
        if(p1->terms[i].expo > p2->terms[j].expo)
            sum->terms[k++] = p1->terms[i++];
        else if(p1->terms[i].expo < p2->terms[j].expo)
            sum->terms[k++] = p2->terms[j++];
        else{
            sum->terms[k].expo = p1->terms[i].expo;
            sum->terms[k++].coeff = p1->terms[i].coeff + p2->terms[j].coeff;        
            i++;
            j++;
        }
    }
    for(;i<p1->n;i++) sum->terms[k++] = p1->terms[i];
    for(;j<p2->n;j++) sum->terms[k++] = p2->terms[j];
    sum->n = k;
    return sum;
    
    
    
}

int main(){
    struct poly p1,p2,*p3;
    create(&p1);
    create(&p2);
    p3 = add(&p1,&p2);
    printf("1st \n");
    display(p1);
    printf("2nd\n");
    display(p2);
    printf("sum\n");
    display(*p3);
    return 0;
}







