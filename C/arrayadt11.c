#include<stdio.h>
#include<stdlib.h>
// reversing the array 2 methods
struct arr {
    int A[10];
    int size;
    int length;
};
/*void display(struct arr ar){
    int i;
    for(i=0;i<ar.length;i++){
        printf("%d ",ar.A[i]);
    }
  
}*/
void Display(struct arr ar)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<ar.length;i++)
    printf("%d ",ar.A[i]);
}
struct arr* merge(struct arr *ar1,struct arr *ar2)
{
    int i,j,k = 0;
    struct arr *ar3 = (struct arr *)malloc(sizeof(struct arr));
    while(i<ar1->length && j<ar2->length){
        if(ar1->A[i]>ar2->A[j])
            ar3->A[k++] = ar2->A[j++];
        else
            ar3->A[k++] = ar1->A[i++];
    }
    //copying the remaining elements
    for(;i<ar1->length;i++)
        ar3->A[k++] = ar1->A[i];
    for(;j<ar2->length;j++)
        ar3->A[k++] = ar2->A[j];
    ar3->length = ar1->length + ar2->length;
    ar3->size = 10;
    return ar3;
}
int main(){
    struct arr ar1 = {{1,5,8,13,15},10,5};
    struct arr ar2 = {{2,4,6,14,18},10,5};
    struct arr *ar3;
    ar3 = merge(&ar1,&ar2);
 
    Display(*ar3);
    return 0;
    

}