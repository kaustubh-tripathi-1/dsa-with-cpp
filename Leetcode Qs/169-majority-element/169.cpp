#include<iostream>
#include<vector>
#include<unordered_map>

class Solution {
    public:
        int majorityElement(std::vector<int>& nums) {
            //- Using a hashmap
            /* std::unordered_map<int, int> freqMap;

            for( auto num : nums )
            {
                if( ++freqMap[num] > nums.size()/2)
                {
                    return num;
                }
            }

            return -1000000001; */

            //- Using Boyer Moore Voting Algo. - O(n), O(1)
            int count = 0, candidate = nums[0];

            for ( int i = 0 ; i < nums.size() ; i++ ) {

                if(count == 0) {
                    candidate = nums[i];
                }

                if(nums[i] == candidate) {
                    count++;
                }
                else {
                    count--;
                }
            }

            return candidate;
        }
};

int main()
{
    Solution s1;
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2, 1, 2, 333, 1, 1};
    int majEl = s1.majorityElement(nums);

    std::cout<<majEl;
}