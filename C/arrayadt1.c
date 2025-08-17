#include<stdio.h>
#include<stdlib.h>
//creation of array using structure and pointer
struct arr {
    int *A;
    int length;
    int size;
};
void display(struct arr ar){
    int i ;
    for(i=0;i<ar.length;i++){
        printf("%d",ar.A[i]);
    }
    
}
int main(){
    struct arr ar;
    int n,i;
    printf("enter the size of the array\n");
    scanf("%d",&ar.size);
    ar.A = (int *)malloc(ar.size*sizeof(int));
    ar.length = 0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&ar.A[i]);
    }
    ar.length = n;
    display(ar);
    return 0;

}
