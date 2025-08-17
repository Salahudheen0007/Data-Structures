#include<iostream>
using namespace std;
void swap(string &x,string &y);
int main(){
    //call by address it will use the  memory location instead of making the copy in call by value

    string x = "apple";
    string y = "orange";
    swap(x,y);
    cout<<"x is"<<x<<'\n';
    cout<<"y is "<<y<<'\n';
    return 0;

}
void swap(string &x,string &y){
    string temp = x;
    x = y;
    y = temp;
}