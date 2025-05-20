#include <iostream>
#include <bits/stdc++.h>

int findFirstOccurrence(const std::vector<int> &arr, int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }

    int middle = start + (end - start) / 2;

    if (arr[middle] == target)
    {
        // First occurrence check
        if (middle == 0 || arr[middle - 1] < target)
        {
            return middle;
        }
        else
        {
            return findFirstOccurrence(arr, target, start, middle - 1);
        }
    }
    else if (arr[middle] < target)
    {
        return findFirstOccurrence(arr, target, middle + 1, end);
    }
    else
    {
        return findFirstOccurrence(arr, target, start, middle - 1);
    }
}


int main() 
{
    int size, target;

    std::cin >> size >> target;

    std::vector<int> arr(size);
    for(auto& it : arr) std::cin >> it;
    
    std::cout << findFirstOccurrence(arr, target, 0, arr.size() - 1);
    
    return 0;
}