#include<iostream>
#include<vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 1;
        
        if (nums.size() == 1) {
            return k;
        }

        int j = 0;
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
                k++;
            }
        }

        return k;
    }
};