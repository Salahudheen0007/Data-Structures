#include<iostream>
using namespace std;

int main(){
    //fill() = fills the range of elements with specified value
    //fill(begin,end,value)

    const int SIZE = 99;
    string foods[SIZE];
    fill(foods,foods+(SIZE/3),"pizza");
    fill( foods + SIZE/3,foods+(SIZE/3)*2,"Hamburger");
    fill(foods+(SIZE/3)*2,foods+SIZE,"hotdogs");
    for(string food : foods){
        cout<<food<<endl;
    }
    return 0;
}