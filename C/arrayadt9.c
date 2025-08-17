#include<stdio.h>
#include<stdlib.h>
// reversing the array 2 methods
struct arr {
    int A[10];
    int size;
    int length;
};
void display(struct arr ar){
    int i ;
    for(i=0;i<ar.length;i++){
        printf("%d ",ar.A[i]);
    }
  
}
//method 1
void reverse1(struct arr *ar){
    int i,j;
    int *B;
    B = (int *)malloc(ar->length*sizeof(int));
    for(i=ar->length-1,j=0;i>=0;i--,j++)
        B[j] = ar->A[i];
    for(i=0;i<ar->length;i++)
        ar->A[i] = B[i];
}
//method 2
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
void reverse2(struct arr *ar){
    int i,j;
    for(i=0,j=ar->length-1;i<j;i++,j--)
        swap(&ar->A[i],&ar->A[j]);
}
int main(){
    struct arr ar = {{1,2,3,4,5},10,5};
    //reverse1(&ar);
    reverse2(&ar);
    display(ar);
    return 0;
    

}