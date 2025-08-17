#include<stdio.h>
#include<stdlib.h>
// array operations
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
int Get(struct arr ar,int index){
    if(index>=0 && index<ar.length)
        return ar.A[index];
    return -1;
}
void Set(struct arr *ar,int index,int x){
    if(index>=0 && index<ar->length)
        ar->A[index] = x;
}
int max(struct arr ar){
    int max = ar.A[0];
    int i;
    for(i=0;i<ar.length;i++)
    {
        if(ar.A[i]>max)
            max = ar.A[i];
    }
    return max;
}
int min(struct arr ar){
    int min = ar.A[0];
    int i;
    for(i=0;i<ar.length;i++)
    {
        if(ar.A[i]<min)
            min = ar.A[i];
    }
    return min;
}
int sum(struct arr ar){
    int s = 0;
    int i;
    for(i=0;i<ar.length;i++)
        s+=ar.A[i];
    return s;
}
float avg(struct arr ar){
    return (float)sum(ar)/ar.length;
}
int main(){
    struct arr ar = {{1,2,3,4,5},10,5};
    //printf("%d \n",Get(ar,5));
    //Set(&ar,2,20);
    //printf("%d",max(ar));
    //printf("%d " ,min(ar));
    printf("%d",sum(ar));
    printf("%f",avg(ar));
    display(ar);
    
    return 0;
    

}