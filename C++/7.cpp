#include<iostream>

using namespace std;

int main(){
    //working of for each loop
    // for each loop = loop that eases the traversal over an iterable data set
    string students[] = {"sharath","shebin","vivek"};
    for(string student : students){
        cout<< student<<endl;
    } 
    int grades[] = {23,454,56,67,65};
    for(int grade:grades){
        cout<<grade << endl;
    }
}