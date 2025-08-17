/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>

using namespace std;

int main()

{
    int a = 10;
   
    double b =9.99;
    //const double pi = 3.14;
    cout<<"Hello World" << endl;
    //cout<<pi <<endl;
    cout<<"a = "<<a<<endl
        <<"b = "<<b;
    //cout<<"enter the values"<<endl;
    int val1,val2;
   // cin>>val1>>val2;
    cout<<val1<<val2;
    //progrm to find the area of the circle
    //cout<<"enter the radius"<<endl;
    int radius;
    //cin>>radius;
    const double pi = 3.14;
    int area = pi*pow(radius,2);
    cout<<"area of the cirlce is  "<<area;

    return 0;
}