#include<iostream>
#include<vector>

class Solution {
public:
    std::vector<int>& plusOne(std::vector<int>& digits) {

        if(digits[digits.size() -1] != 9)
        {
            digits[digits.size() -1]++;
            return digits;
        }

        int i = digits.size() - 1;
        while(i >= 0 && digits[i] == 9)
        {
            digits[i] = 0;
            i--;
        }

        if(i == -1)
        {
            digits.push_back(0);
            digits[0] = 1;
        }
        else
        {
            digits[i]++;
        }

        return digits;
    }
};

int main()
{
    Solution s;
    std::vector<int> digits1 = {9, 9, 9};
    std::vector<int> digits2 = {1, 9, 9, 9};
    std::vector<int> digits3 = {4, 3, 9, 9};
    std::vector<int> digits4 = {4, 3, 2, 8};
    s.plusOne(digits4);

    for(auto digit : digits4)
    {
        std::cout<<digit;
    }
    std::cout<<"\n";
}