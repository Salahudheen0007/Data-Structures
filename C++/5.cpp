
#include <iostream>

//cout<< insertion operator
// cin >>extraction operator

int main()
{
    std::cout<<"Hello World";
    std::string name;
    int age;
    std::cout<<"enter your ful name"<<"\n";
    std:: getline(std::cin,name);
    std::cout<<"enter your age"<<'\n';
    std::cin>>age;
    std::cout<<"heloo "<<name<<"you are "<<age<<" years old";

    return 0;
}