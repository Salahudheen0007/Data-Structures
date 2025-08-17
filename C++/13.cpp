#include<iostream>

using namespace std;
//pointers = variable that stores  the memmory address of the an0ther vaarible ,sometimes it is easier tovwork with address
// &  = address of operator
// * is dereference operator
int main(){
    string name = "bro";
    int age = 21;
    string pizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};


    string *pName = &name;
    int *pAge = &age;
    string *pPizzas = pizzas;//array itself a memmory address

    cout << *pName<<'\n';
    cout << *pAge << '\n';
    cout << *pPizzas << '\n';
}