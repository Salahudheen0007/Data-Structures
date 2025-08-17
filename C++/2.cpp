#include<iostream>

using namespace std;
namespace first{
    int x = 20;
}

int  main(){
    int a = 100;
    double b = 12.12;
    float c = 13.23f;
    long d = 100000L;
    char s = 'h';
    bool isValid = true;
    int number {};
    cout << number <<endl;
    int binary1 = 0b11111111;
    cout<<binary1<<endl;
    int hexadecimal1 = 0xff;
    cout<<hexadecimal1<<endl;
    string name = "hello";
    cout<<name;
    cout<<first::x;

    return 0;
}