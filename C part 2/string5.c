#include<stdio.h>
#include<stdlib.h>
// to validate (only no nd alphabets no special characters)
int validate(char *name){
    int i;
   for(i=0;name[i]!='\0';i++){
    if(!(name[i] >= 'a' && name[i] <= 'z') &&
       !(name[i] >= 'A' && name[i] <= 'Z') &&
       !(name[i] >= 48 && name[i] <= 57)){
        return 0;
       }
   }return 1;
}


int main(){
    char *name = "Abc1122";
    if(validate(name))
        printf("valid");
    else    printf("not");
    return 0;

}