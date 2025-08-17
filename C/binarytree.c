#include <stdio.h>
#include <stdlib.h>
struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Queue{
    int size;
    int rear;
    int front;
    struct Node **Q;
};
void create(struct Queue *q,int size){
    q->size  = size;
    q->front = q->rear = -1;
    q->Q = (struct Node **)malloc(q->size*sizeof(struct Node *));
}
void enqueue(struct Queue *q,struct Node *x){
    if(q->rear == q->size-1) printf("queue is full");
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}
struct Node * dequeue(struct Queue *q){
   struct Node *x = NULL;
    if(q->front == q->rear) printf("queue is empty");
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return  x;
}
int Isempty(struct Queue q){
    return q.front == q.rear;
}
struct Node *root = NULL;
void treecreate(){
    
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);
    printf("enter the root value\n");
    scanf("%d",&x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q,root);
    while(!Isempty(q)){
        p = dequeue(&q);
        printf("enter  the lchild of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->rchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q,t);
        }
        printf("enter  the rchild of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->rchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q,t);
        }    
   
    }
    

}
void preorder(struct Node *p){
    if(p){
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    
        
    }
}
void Inorder(struct Node *p){
    if(p){
        
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
        
    }
}
void postorder(struct Node *p){
    if(p){
        
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ",p->data);
        
    }
}

//iterative vesrsion to traversal using stack
struct Stack
{
 int size;
 int top;
 struct Node **S;
};
void stackcreate(struct Stack *st,int size)
{
 st->size = size;
 st->top=-1;
 st->S=(struct Node **)malloc(st->size*sizeof(struct Node *));
}
void push(struct Stack *st,struct Node *x)
{
 if(st->top==st->size-1)
 printf("Stack overflow\n");
 else
 {
 st->top++;
 st->S[st->top]=x;
 }

}
struct Node *pop(struct Stack *st)
{
 struct Node *x=NULL;

 if(st->top==-1)
 printf("Stack Underflow\n");
 else
 {
 x=st->S[st->top--];
 }
 return x;
}

int isEmptystack(struct Stack st)
{
 if(st.top==-1)
 return 1;
 return 0;
}
int isFullstack(struct Stack st)
{
 return st.top==st.size-1;
}

// iterative 
void Ipreorder(struct Node *p){
    struct Stack stk;
    stackcreate(&stk,100);
    while(p!=NULL || !isEmptystack(stk)){
        if(p){
            printf("%d ",p->data);
            push(&stk,p);
            p = p->lchild;
        }
        else{
            p = pop(&stk);
            p= p->rchild;
        }
    }
}
void Iinorder(struct Node *p){
    struct Stack stk;
    stackcreate(&stk,100);
    while(p!=NULL || !isEmptystack(stk)){
        if(p){
            
            push(&stk,p);
            p = p->lchild;
        }
        else{
            p = pop(&stk);
            printf("%d ",p->data);
            p= p->rchild;
        }
    }
}
//level order traversal
void levelorder(struct Node *root){
    struct Queue q;
    create(&q,100);
    printf("%d ",root->data);
    enqueue(&q,root);
    while(!Isempty(q)){
        root = dequeue(&q); 
        if(root->lchild){
            printf("%d ",root->lchild->data);
            enqueue(&q,root->lchild);
        }
        if(root->rchild){
            printf("%d ",root->rchild->data);
            enqueue(&q,root->rchild);
        }
    }
}
// counting the number of nodes
int count(struct Node *root){
    if(root){
        return count(root->lchild) + count(root->rchild) + 1;
    }
    return 0;
}
// to find the height of the binary tree
int height(struct Node *root){
    int x=0,y = 0;
    if(root == 0){
        return 0;
    }
    x = height(root->lchild);
    y = height(root->rchild);
    if(x>y) return x+1;
    else return y+1;
}
// to fiind the number of leaf nodes or nodes with degree 0
int count1(struct Node *root){
    int x=0,y = 0;
    if(root == 0){
        return 0;
    }
    x = count1(root->lchild);
    y = count1(root->rchild);
    if(root->lchild == NULL && root->rchild == NULL) return x+y+1;
    else return x+y;
    
// to find the number of nodes with degree 2
int count2(struct Node *root){
    int x=0,y = 0;
    if(root == 0){
        return 0;
    }
    x = count2(root->lchild);
    y = count2(root->rchild);
    if(root->lchild != NULL && root->rchild != NULL) return x+y+1;
    else return x+y;
int main(){
    treecreate();
    printf(" count is %d \n",count(root));
    printf("height is %d ",height(root));
    return 0;
}


