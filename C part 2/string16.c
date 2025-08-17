//method 2 to find permutation
#include<stdio.h>
#include<stdlib.h>
void perm(char S[],int l,int h){
    int i;
    if(l==h)
        printf("%s \n",S);
    else{
        for(i=l;i<=h;i++){
            swap1(&S[l],&S[i]);
            perm(S,l+1,h);
            swap1(&S[l],&S[i]);
        }
    }

}

void swap1(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    char S[] = "ABC";
    int l = 0;
    int h = 2;
    perm(S,l,h);
    return 0;
}