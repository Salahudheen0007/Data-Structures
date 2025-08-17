//to check anagram
#include<stdio.h>
#include<stdlib.h>
int main(){
    char A[] = "decimasl";
    char B[] = "medical";
    int H[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};;
    int i;
    for (i = 0; A[i] != '\0'; i++);
    int lenA = i;

    for (i = 0; B[i] != '\0'; i++);
    int lenB = i;

    if (lenA != lenB) {
        printf("not anagram\n");
        return 0;
    }
    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]++;
    }
    for(i=0;B[i]!='\0';i++){
        H[B[i]-97]--;
        if(H[B[i]-97] < 0){
            printf("not anagram");
            break;
        }

    }
    if(B[i]=='\0')
        printf("anagram");
}