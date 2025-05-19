#include<iostream>
#include<memory>

int main()
{
    int size;
    std::cin>>size;

    if (size < 2) {
        std::cout << "No second largest element exists\n";
        return 0;
    }
    
    const long long int long_long_min = -9223372036854775807ll;
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(size);

    for ( int i = 0 ; i < size ; i++ )
    {
        std::cin>>arr[i];
    }

    long long int maxNum = arr[0], secMaxNum = long_long_min;

    for ( int i = 1 ; i < size ; i++ )
    {
        if(arr[i] > maxNum)
        {
            secMaxNum = maxNum;
            maxNum = arr[i];
        }
        else if ( arr[i] < maxNum && arr[i] > secMaxNum )
        {
            secMaxNum = arr[i];
        }
    }

    if (secMaxNum == long_long_min) {
        std::cout << "No second largest element exists\n";
    } else {
        std::cout << secMaxNum << "\n";
    }

    return 0;
}