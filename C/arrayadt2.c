//array in stack memory
#include<stdio.h>
#include<stdlib.h>

struct arr {
    int A[20];
    int size;
    int length;
};
void display(struct arr ar){
    int i ;
    for(i=0;i<ar.length;i++){
        printf("%d",ar.A[i]);
    }
    
}
int main(){
    struct arr ar = {{1,2,3,4},20,4};
    display(ar);
    return 0;

}