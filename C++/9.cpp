#include<iostream>

using namespace std;
//bubble sort
void sort(int numbers[],int size);
int main(){
    int numbers[] = {4,2,5,3,12,54,57,32};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers,size);
    for( int element:numbers){
        cout<<element<<" ";
    }
    return 0;
}
void sort(int numbers[],int size){
    int temp;
    for(int i =0;i<size-1;i++){
        for(int j= 0;j<size - i -1;j++){
            if(numbers[j]>numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}