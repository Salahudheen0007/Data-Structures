//appending and inserting
//array in stack memory
#include<stdio.h>
#include<stdlib.h>

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
void append(struct arr *ar,int x){
    if(ar->length < ar->size)
        //(*ar).A[(*ar).length++] = x;
        ar->A[ar->length++] = x;
    
}
void insert(struct arr *ar,int index,int x){
    int i;
    if(index >= 0 && index <= ar->length)
    {
        for(i=ar->length;i>index;i--)
            ar->A[i] = ar->A[i-1];
        ar->A[index] = x;
        ar->length++;
    }
}  
int main(){
    struct arr ar = {{1,2,3,4,5},10,5};
    //append(&ar,7);
    insert(&ar,4,10);
    display(ar);
    
    return 0;
    

}