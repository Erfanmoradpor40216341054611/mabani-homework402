#include <iostream>
int main()
{
    long int s=0,a;
    std::cout<<"enter your numbers :"<<std::endl;
    std::cin>>a;
    while(a!=0)
    {
        s+=a;
        std::cin>>a;
    }
    std::cout<<"="<<s;344

}
