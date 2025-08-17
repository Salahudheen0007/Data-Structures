#include<iostream>
using namespace std;
int main(){


    //type conversion 2 types implicit and explicit
    

    char x = 100;
    cout <<x<<endl;
    cout << char(100)<<endl;
    cout << (char)100<<endl;

    int correct = 8;
    int questions = 10;
    double percentage = correct /(double)questions *100;
    cout << percentage<< "%"; 
}