#include<stdio.h>
#include<stdlib.h>
//linear search
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
int linearsearch(struct arr ar,int key){
    int i;
    for(i=0;i<ar.length;i++){
        if(key==ar.A[i]){
           return i;
           
    }}
    return -1;
}
int main(){
    struct arr ar = {{1,2,3,4,5},10,5};
    printf("%d ",linearsearch(ar,3));
    //display(ar);
    
    return 0;
    

}