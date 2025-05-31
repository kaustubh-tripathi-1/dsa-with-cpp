#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        
        std::vector<int> result;

        //- Approach 1 -> TC - O(n), SC - O(n) with Hashhmap
        /* std::unordered_map<int, int> freqMap;
        
        for(auto num : nums1)
        {
            freqMap[num]++;
        }

        for(auto num : nums2)
        {
            if(freqMap[num] > 0)
            {
                result.push_back(num);
                freqMap[num] = 0;
            }
        } */

        //- Approach 2 -> TC - O(n), SC - O(n) with Set

        std::unordered_set<int> set;
        
        for(auto num : nums1)
        {
            set.insert(num);
        }

        for(auto num : nums2)
        {
            if(set.count(num))
            {
                result.push_back(num);
                set.erase(num);
            }
        }
        
        return result;
    }
};

int main()
{
    Solution s;
    std::vector<int> nums1 = {4,9,5,4,9};
    std::vector<int> nums2 = {9,4,9,8,4,4,9};
    std::vector<int> result = s.intersection(nums1, nums2);

    for(auto num : result)
    {
        std::cout<<num<<" ";
    }

}