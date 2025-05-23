#include<iostream>
#include<vector>

class Solution
{
    private: 
        std::vector<int> fibVec;
    
    public:
    
        Solution() : fibVec(51, -1) {}

        int fib(int n)
        {
            if ( n == 0 || n == 1)
            {
                fibVec[n] = n;
                return n;
            }
            
            if ( fibVec[n] != -1 )
            {
                return fibVec[n];
            }

            fibVec[n] = fib(n-1) + fib(n-2);

            return fibVec[n];
        }
};

int main()
{
    Solution s1;
    int fnum = s1.fib(10);

    std::cout<<fnum;

}