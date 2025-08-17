//function template
#include<iostream>

using namespace std;
/* int max(int x,int y){
    return (x>y) ? x:y;
}
double max(double x,double y){
    return (x>y) ? x:y;
}
char max(char x,char y){
    return (x>y) ? x:y;
} */
// to avoid this overloading function use single function that run all
template <typename T,typename U> //which will accept any 2 dATATYPES

auto max(T x,U y){
    return (x>y)?x:y;
}
int main(){

    cout << max('A',3.1);

    return 0;
}