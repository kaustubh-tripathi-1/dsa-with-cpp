#include<iostream>

int main()
{
    int n, m;
    std::cin>>n>>m;

    int rows = 3*n+1, columns = m+1;

    for ( int i = 0; i < rows ; i++ )
    {
        for ( int j = 1; j < columns ; j++ )
        {
            if ( i % 3 == 0 )
            {
                std::cout<<"***";
            }
            else
                std::cout<<"*..";
        }
        
        std::cout<<"*";
        if ( i != rows-1 )
        {
            std::cout<<"\n";
        }
    }

    return 0;
}