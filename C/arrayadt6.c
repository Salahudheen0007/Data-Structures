#include<stdio.h>
#include<stdlib.h>
// improving linear search using transposition and move to front
struct arr {
    int A[10];
    int size;
    int length;
};
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
void display(struct arr ar){
    int i ;
    for(i=0;i<ar.length;i++){
        printf("%d ",ar.A[i]);
    }
  
}
//transposition
int linearsearch(struct arr *ar,int key){
    int i;
    for(i=0;i<ar->length;i++){
        if(key==ar->A[i]){
           swap(&ar->A[i],&ar->A[i-1]);
           
           return i-1;
           
    }}
    return -1;
}
//move to head
int linearsearch1(struct arr *ar,int key){
    int i;
    for(i=0;i<ar->length;i++){
        if(key==ar->A[i]){
           swap(&ar->A[i],&ar->A[0]);
           
           return 0;;
           
    }}
    return -1;
}
int main(){
    struct arr ar = {{1,2,3,4,5},10,5};
    printf("%d \n",linearsearch1(&ar,3));
    display(ar);
    
    return 0;
    

}