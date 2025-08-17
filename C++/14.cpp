#include<iostream>


using namespace std;

int main(){
    //refer null pointer iin the brocode video 4:24;

    int *pointer =  nullptr;
    int x = 123;
    int age = 21;
    int *pAge = NULL;
    pAge = &age;
    pointer = &x;f`
    if(pointer == nullptr){
        cout<< "addres is not assigned";
    }
    else{
        cout<< "addres is assigned";
        cout<<*pointer<<'\n';
    }
    cout<<*pAge;

    return 0;
}