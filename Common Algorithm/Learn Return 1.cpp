#include<iostream>
int returnFive()
{
    return 5;
}
int main()
{
    returnFive();
    returnFive();
    returnFive();
    std::cout<<returnFive()<<std::endl;
    std::cout<<returnFive() + 2 << std:: endl;
    
    return 1;
}
