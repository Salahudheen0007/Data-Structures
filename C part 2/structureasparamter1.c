#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<limits.h>
struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first  = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(i=1;i<n;i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last  = t;
        
    }
    
}
//using the while loop
void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->next;
        }
    }
//recursion to print in correct order      
void Rdisplay(struct Node *p){
    if(p!=NULL){
        printf("%d",p->data);
        Rdisplay(p->next);
        
    }
} //recursion to revrerse      
void Rdisplay1(struct Node *p){
    if(p!=NULL){
        Rdisplay(p->next);
        printf("%d",p->data);
    }
}    
int count(struct Node *p){
    int l = 0;
    while(p){
        l++;
        p = p->next;
    }
    return l;
}
//count using recursion
int count1(struct Node *p){
    if(p!=NULL){
        return (count1(p->next))+1;
    }
    else{
        return 0;
    }
    
}
//to find sum
int sum(struct Node *p){
    int s = 0;
    while(p){
        s+=p->data;
        p = p->next;
    }
    return s;
}
//recursive sum
int Rsum(struct Node *p){
    if(p==NULL)
        return 0;
    else
        return (Rsum(p->next)) + p->data;
}
//finding the max value
int Max(struct Node *p){
    int max = INT_MIN;
    // int_min value in package limits.h 
    printf("%d  \n",max);
    while(p){
        if(p->data > max)
            max = p->data;
        p = p->next ;   
    }
    return max;
}
//using recursion
int Rmax(struct Node *p){
    int x = 0;
    
    if(p==0)
        return INT_MIN;
    x = Rmax(p->next);
    if(p->data>x)
        return p->data;
    else return x;    
}
int Rmax1(struct Node *p){
    int x = 0;
    
    if(p==0)
        return INT_MIN;
    x = Rmax(p->next);
    //using ternary operator check in google for the working
    return p->data>x?p->data:x;   
}
//linear search
struct Node  * LSearch(struct Node *p,int key){
    while(p){
        if(key == p->data)
            return p;
        p = p->next;
    }return NULL;
}
struct Node * RSearch(struct Node *p,int key){
    if(p==NULL) return NULL;
    if(key==p->data) return p;
    else{
        return RSearch(p->next,key);
    }
}
//improving lineaar search by move to head
struct Node * L1search(struct Node *p,int key){
    struct Node *q = NULL;
    while(p){
        if(key == p->data){
            q->next = p->next;
            p->next = first;
            first = p ;
            return p;
        }
        q = p;
        p= p->next;
    }
}
//inserting in the linked list
void Insert(struct Node *p,int index,int x){
    struct Node *t;
    int i;
    if(index < 0 || index >count(p)) return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    //insering first
    if(index == 0){
        t->next  = first;
        first = t;
    }
    //insert any other position
    else{
        for(i=0;i<index-1;i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
        
    }
}
//inserting in the last of the linked list ;
void Insertlast(struct Node *p,int x){
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last;
    t->data  = x;
    t->next = NULL;
    if(first==NULL){
        first = last = t;
    }
    else{
        last->next = t;
        last = t;
    }   
}
//insert in the sorted ll
void Insertsort(struct Node *p,int x){
    struct Node *t,*q = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if(first == NULL)
        first = t;
    else{
        while(p && p->data <x){
            q = p;
            p = p->next;
        }
        if(p==first){
            t->next = first;
            first = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }
    }
}
//deleting a node
int Delete(struct Node *p,int index){
    struct Node *q = NULL;
    int x = -1,i;
    if(index <1 || index >count(p)) 
        return -1;
    if(index == 1){
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
        
}
//to check sorted or not
int isSorted(struct Node *p){
    int x = INT_MIN;
    while(p){
        if(p->data<x) return 0;
        x = p->data;
        p = p->next;
        
    }
    return 1;
      
}
//to remove dup from sorted ll
void removeDup(struct Node *p){
    struct Node *q = p->next;
    while(q!=NULL){
        if(p->data != q->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
//reversing using arrayy 
void Reverse1(struct Node  *p){
    int i=0;
    int *A;
    A = (int *)malloc(sizeof(int)*count(p));
    struct Node *q;
    q = p;
    while(q){
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while(q){
        q->data = A[i];
        q = q->next;
        i--;
    }
}
void Reverse2(struct Node *p){
    struct Node *q = NULL;
    struct Node *r = NULL;
    while(p){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }first = q;
}
// reversing using recursion
void Reverse3(struct Node *q,struct Node *p){
    if(p!=NULL){
        Reverse3(p,p->next);
        p->next = q;
    }
    else{
        first = q;
    }
}
int main(){
    int A[10] = {2,2,3,7,9,10};
    create(A,6);
    //removeDup(first);
    //printf("deleted element is %d  \n",Delete(first,2));
    /*Insertsort(first,8);
    Insertsort(first,3);
    Insertsort(first,10); */
    //create linked list using insert function
    /*Insert(first,0,12);
    Insert(first,1,02);
    Insert(first,0,14);
    Insert(first,0,16);
    */
    /*insering in last
    Insertlast(first,2);
    Insertlast(first,5);*/
    //struct Node  * temp;
    //temp = L1search(first,26);
    //temp = L1search(first,6);
    //if(temp) printf("element  found is %d\n",temp->data);
    //else printf("element not found\n");
    
    /*if(isSorted(first)) printf("sorted");
    else printf("not sorted");*/
    Reverse3(NULL,first);
    display(first);
    //Rdisplay(first);
    //printf("count is %d\n\n",count1(first));
    //printf("sum is %d\n\n",Rsum(first));
    //printf("maximum element is %d\n\n",Rmax1(first));
    return 0;
    
}











