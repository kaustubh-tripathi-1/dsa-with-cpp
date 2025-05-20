#include <iostream>
#include <vector>
#include <algorithm>

void Solve(std::vector<int>& arr) {
    int round, swapPtr ;

    // std::sort(arr.begin(), arr.end());
    
    for(round = 1; round < arr.size() ; round++ )
    {
        bool swapped = false;
        for(swapPtr= 0; swapPtr < arr.size()-round ; swapPtr++ )
        {
            if ( arr[swapPtr] > arr[swapPtr + 1] )
            {
                std::swap(arr[swapPtr], arr[swapPtr + 1]);
                swapped = true;
            }
        }
        if ( !swapped )
        {
            return;
        }
    }
    
}


int main() {
    int size;
    std::cin >> size;
    std::vector<int> arr(size);
    for(auto& it : arr) std::cin >> it;
    Solve(arr);
    for(auto it : arr){
        std::cout << it << " ";
    }
    return 0;
}