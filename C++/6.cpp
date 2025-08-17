#include<ctime>
#include <iostream>
using namespace std;
int main()
{
    //pseudo random, numers = not truly random but too close
    srand(time(NULL));
    ///if we want a numbet between 2 numbers
    
    int num = (rand() %6)+1;
    cout<< num;
    

    return 0;
}