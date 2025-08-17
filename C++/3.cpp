#include<iostream>
#include<vector>


//typedef std::string str;
//typedef int number;
//also we can use using keyword as alias name forr the other datatype
using str = std::string;
using number = int;

int main(){
    str a = "hello";
    number b = 10;
    std::cout << a<<std::endl;
    std::cout<<b;
    return 0;
}