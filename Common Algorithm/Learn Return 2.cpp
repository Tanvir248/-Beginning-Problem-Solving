#include<iostream>
int getinputfromuser(){
    int input;
    std::cout<<"Enter an integer: ";
    std::cin>>input;
    return input;
}
int main()
{
    int num{ getinputfromuser() };
    std:: cout<<"Number is: "<<num<<" Double is: "<<num *2<<std::endl;
    return 0;
}
