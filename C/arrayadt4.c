#include<stdio.h>
#include<stdlib.h>
//deleting from the array
struct arr {
    int A[10];
    int size;
    int length;
};

int delete(struct arr *ar,int index){
    int x = 0;
    int i;
    if(index>=0 && index<ar->length)
    {

        x = ar->A[index];
        for(i=index;i<ar->length-1;i++)
            ar->A[i] = ar->A[i+1];
        ar->length--;
        return x;
    }      
    return 0;      
}
void display(struct arr ar){
    int i ;
    for(i=0;i<ar.length;i++){
        printf("%d ",ar.A[i]);
    }
    
}

int main(){
    struct arr ar = {{1,2,3,4,5},10,5};
    printf("%d\n",delete(&ar,4));
    display(ar);
    
    
    return 0;
    

}