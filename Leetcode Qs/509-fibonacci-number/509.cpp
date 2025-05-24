#include<iostream>
#include<vector>

class Solution
{
    private: 
        std::vector<int> fibVec;
    
    public:
    
        Solution() : fibVec(51, -1) {}

        int fib(int n) {
            //- Recursive Approach with a std::vector
            /* if ( n == 0 || n == 1)
            {
                fibVec[n] = n;
                return n;
            }
            
            if ( fibVec[n] != -1 )
            {
                return fibVec[n];
            }

            fibVec[n] = fib(n-1) + fib(n-2);

            return fibVec[n]; */

            //- Iterative approach

            if ( n == 0 || n == 1) {
                return n;
            }
            
            size_t first = 0, second = 1, result;

            for(int i = 1; i < n ; i++) {
                result = first+second;
                first = second;
                second = result;
            }

            return result;
        }
};

int main()
{
    Solution s1;
    int fnum = s1.fib(3);

    std::cout<<fnum;

}