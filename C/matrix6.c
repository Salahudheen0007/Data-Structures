//menu driven code for diagonal matrix

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n,*A;
    int ch,i,j,x;
    printf("enter the dimension of the array: \n");
    scanf("%d",&n);
    A = (int *)malloc(n*sizeof(int));
    do{
        
        printf("enter the choice  \n");
        printf("1.create\n2.get\n3.set\n4.display\n5.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("enter the diagonal elements one by one\n");
                for(i=1;i<=n;i++){
                    scanf("%d",&A[i-1]);
                }break;
            case 2:
                printf("enter the matrices\n");
                scanf("%d %d",&i,&j);
                if(i==j) printf("%d",A[i-1]);
                else printf("0");
                break;
            case 3:
                printf("enter the row ,col ,element\n");
                scanf("%d%d%d",&i,&j,&x);
                if(i==j) A[i-1] = x;
                break;
            case 4:
                for(i=1;i<=n;i++){
                    for(j=1;j<=n;j++){
                        if(i==j) printf("%d ",A[i-1]);
                        else printf("0 ");
                    }printf("\n");
                }
                break;
            case 5:
                printf("exiting ");
                break;
            default :
                printf("error\n");
                break;
        }
    }while(ch!=5);
}