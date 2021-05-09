#include<iostream>
#include <stdio.h>
int main()
{
    double n,x;
    int a, b, y;
    std::cin>>n;
    std::cin>>a>>b;
    double mealcost, tippercent, taxpercent;
    mealcost= n;
    tippercent = (mealcost*a)/100;
    taxpercent= (mealcost*b)/100;
    x= (mealcost+tippercent+taxpercent);
    y= (mealcost+tippercent+taxpercent);
    // printf("%0.1lf\n", x);
    //std::cout<<y<<std::endl;
    //std::cout<<x-y<<std::endl;
    if(x-y>=0.5){
        std::cout<<y+1<<std::endl;
    }
    else
        std::cout<<y<<std::endl;
    return 0;
}


