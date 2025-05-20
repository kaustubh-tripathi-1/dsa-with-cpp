#include<iostream>
#include<memory>

int main()
{
    int size1, size2;
    std::cin>>size1>>size2;

    if ( size2 > size1 )
    {
        std::cout<<"NO";
        return 0;
    }

    std::unique_ptr<int[]> array1 = std::make_unique<int[]>(size1);
    std::unique_ptr<int[]> array2 = std::make_unique<int[]>(size2);

    for(int i = 0 ; i < size1 ; i++ )
    {
        std::cin>>array1[i];
    }

    for(int i = 0 ; i < size2 ; i++ )
    {
        std::cin>>array2[i];
    }

    int j = 0;
    for ( int i = 0 ; i < size1 && j < size2; i++ )
    {
        if ( array1[i] == array2[j] )
        {
            j++;
        }
    }

    if ( j == size2 )
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }

    return 0;
}