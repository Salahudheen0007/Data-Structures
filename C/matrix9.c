//to add 2 sparse matrixes
#include<stdio.h>
#include<stdlib.h>
struct Element{    int i;
    int j;
    int x;
};
struct sparse{
    int m;
    int n;
    int num;
    struct Element *ele;
};
void create(struct sparse *s){
    int i;
    printf("enter the dimension\n");
    scanf("%d%d",&s->m,&s->n);
    printf("enter the number of non zero elements\n");
    scanf("%d",&s->num);
    s->ele = (struct Element *)malloc(s->num*sizeof(struct Element));
    printf("enter the elements in order row column aand element\n");
    for(i=0;i<s->num;i++){
        scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
    }
    
}
struct sparse  * add(struct sparse *s1,struct sparse *s2){
    int i = 0;
    int j = 0;
    int k = 0;
    struct sparse *sum;
    if(s1->m!=s2->m || s1->n!=s2->n) return NULL;
    sum = (struct sparse *)malloc(sizeof(struct sparse));
    sum->ele = (struct Element *)malloc((s1->num +s2->num)*sizeof(struct Element));
    while(i<s1->num && j<s2->num){
        if(s1->ele[i].i<s2->ele[j].i)
            sum->ele[k++] = s1->ele[i++];
        else if(s1->ele[i].i>s2->ele[j].i)
            sum->ele[k++] = s2->ele[j++];
        else{
            if(s1->ele[i].j<s2->ele[j].j)
            sum->ele[k++] = s1->ele[i++];
        else if(s1->ele[i].j>s2->ele[j].j)
            sum->ele[k++] = s2->ele[j++];
        else{
            sum->ele[k] = s1->ele[i];
            sum->ele[k++].x = s1->ele[i++].x + s2->ele[j++].x;
        }    
        }    
    }
    for(;i<s1->num;i++) sum->ele[k++]  = s1->ele[i];
    for(;j<s2->num;j++) sum->ele[k++] = s2->ele[j];
    
     sum->m=s1->m;
    sum->n=s1->n;
    sum->num = k;
    return sum;
}


void display(struct sparse s){
    int i =0,j=0;
    int k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(k<s.num && i==s.ele[k].i && j==s.ele[k].j)
                printf("%d ",s.ele[k++].x);
            else
                printf("0 ");
        }printf("\n");
    }
}



int main(){
    struct sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
    s3 = add(&s1,&s2);
    if (s3 == NULL) {
        printf("The matrices cannot be added as they have different dimensions.\n");
        return -1;
    }
    printf("1st matrix\n");
    display(s1);
    printf("2nd\n");
    display(s2);
    printf("sum\n");
    display(*s3);
    
    return 0;
    
}










