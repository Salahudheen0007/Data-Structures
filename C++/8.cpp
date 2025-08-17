#include<iostream>
using namespace std;
double getTotal(double marks[],int size);

int main(){
    double marks[]= {23,45,12.54,76.34};
    int size = sizeof(marks)/sizeof(marks[0]);

    double total = getTotal(marks,size);
    cout <<total<<endl;

}

double getTotal(double marks[],int size){

    double total = 0;
    for(int i= 0;i<size;i++){
        total+=marks[i];
    }
    return total;
}