#include<iostream>
#include<memory>

void reverse(std::unique_ptr<int[]> &nums, int start, int end)
{
    while(start < end )
    {
        std::swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;
    std::cin>>size;

    std::unique_ptr<int[]> nums = std::make_unique<int[]>(size);
    for ( int i = 0 ; i < size ; i++ )
    {
        std::cin>>nums[i];
    }

    int k;
    std::cin>>k;
    k = k % size;
    if ( k % size == 0 )
    {
        for ( int i = 0 ; i < size ; i++ )
        {
            std::cout<<nums[i];
            if ( i != size - 1)
            {
                std::cout<<" ";
            }
        }

        return 0;
    }

    reverse(nums, 0, size-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, size-1);
    
    for ( int i = 0 ; i < size ; i++ )
        {
            std::cout<<nums[i];
            if ( i != size - 1)
            {
                std::cout<<" ";
            }
        }

    return 0;
}