#include<stdio.h>
#include<stdlib.h>
// binary search udeing iterative and recursive (prefer loop than tail recursion)
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
int binsearch(struct arr ar,int key){
    int l,h,mid;
    l = 0;
    h = ar.length-1;
    while(l<=h){
        mid = (l+h)/2;
        if(key == ar.A[mid])
            return mid;
        else if(key<ar.A[mid])
            h = mid-1;
        else
            l = mid+1;
    }return -1;
}
int Rbinsearch(int a[],int l,int h,int key){
    int mid;
    
    if(l<=h){
        mid = (l+h)/2;
        if(key == a[mid])
            return mid;
        else if(key<a[mid])
            return Rbinsearch(a,l,mid-1,key);
        else
            return Rbinsearch(a,mid+1,h,key);
    }return -1;
}


int main(){
    struct arr ar = {{1,2,3,4,5},10,5};
    //printf("%d \n",binsearch(ar,7));
    printf("%d \n",Rbinsearch(ar.A,0,ar.length-1,8));
    display(ar);
    
    return 0;
    

}