#include<iostream>
#include<vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int oldArrayIndex = 0, newArrayIndex = 0;

        while(oldArrayIndex < nums.size()) {

            if(nums[oldArrayIndex] != 0) {
                nums[newArrayIndex] = nums[oldArrayIndex];
                if(oldArrayIndex != newArrayIndex) {
                    nums[oldArrayIndex] = 0;
                }
                newArrayIndex++;
            }
            
            oldArrayIndex++;
        }
    }
};

int main() {
    Solution s;
    std::vector<int> nums1 = {0, 1, 0, 3, 12};
    std::vector<int> nums2 = {0, 0, 0, 0, 0, 0, 1, 32, 0, 23, -321, 3, 12, 0, 0, 0, 32, 321, 54, -321};
    std::vector<int> nums3 = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> nums4 = {0};
    std::vector<int> nums5 = {5};
    std::vector<int> nums6 = {5, 7};

    s.moveZeroes(nums2);

    for(auto num : nums2) {
        std::cout<<num<<" ";
    }
}