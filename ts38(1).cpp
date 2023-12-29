#include <iostream>
int main()
{
    int x,y,i,j;
    std::cin>>x>>y;
    j=1;
    for(i=1;i<=y;i++)
        j=j*x;
    std::cout<<j;
}
