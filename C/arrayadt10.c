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
//insering in the sorted array
void insertsort(struct arr *ar,int x){
    int i = ar->length-1;
    if(ar->length == ar->size)
        return ;
    while(i>=0 && ar->A[i]>x)
    {
        ar->A[i+1] = ar->A[i];
        i--;
    }
    ar->A[i+1] = x;
    ar->length++;    

}
//checking the array is sorted or not
int isSorted(struct arr ar){
    int i;
    for(i=0;i<ar.length-1;i++)
        if(ar.A[i]>ar.A[i+1])
            return 0;
    return 1;    
}
//rearranging  positive and negative
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
void rearrange(struct arr *ar){
    int i = 0;
    int j = ar->length-1;
    while(1<j)
    {
        while(ar->A[i]<0)i++;
        while(ar->A[j]>=0)j--;
        if(i<j)
            swap(&ar->A[i],&ar->A[j]);
    }
}
int main(){
    struct arr ar = {{1,-2,-5,3,13},10,5};
    //insertsort(&ar,78);
    //printf("%d\n",isSorted(ar));
    rearrange(&ar);
    display(ar);
    return 0;
    

}