#include<iostream>
#include<vector>


class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        
        //- nums1 empty - copy elements from nums2
        if(m < 1)
        {
            for(int i = 0 ; i < n ; i++)
            {
                nums1[i] = nums2[i];
            }
            return;
        }

        //- nums2 empty, nums1 already the result
        if(n < 1)
        {
            return;
        }
        
        int i = m-1, j = n-1, newArrayIndex = nums1.size() - 1;
        
        while (i >= 0 && j >= 0)
        {
            if(nums1[i] > nums2[j])
            {
                nums1[newArrayIndex--] = nums1[i--];
            }
            else
            {
                nums1[newArrayIndex--] = nums2[j--];
            }
        }
        
        //- No need to copy from nums1 to nums1 as they're already there
        /* while(i >= 0 && newArrayIndex >= 0)
        {
            nums1[newArrayIndex--] = nums1[i--];
        } */

        //- Copy elements from nums2 if left
        while(j >= 0 && newArrayIndex >= 0)
        {
            nums1[newArrayIndex--] = nums2[j--];
        }
        
    }
};