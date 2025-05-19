#include<iostream>
#include<memory>

int main()
{
    int attempts;
    std::cin>>attempts;
    std::unique_ptr<int[]> passwordArray(new int [attempts]());

    for ( int i = 0 ; i < attempts ; i++ )
    {
        std::cin>>passwordArray[i];
    }
    
    for ( int i = 0 ; i < attempts ; i++ )
    {
        if ( passwordArray[i] == 2025)
        {
            std::cout<<"Access Granted";
            return 0;
        }
    }
    
    
    std::cout<<"Access Denied";

    return 0;
}