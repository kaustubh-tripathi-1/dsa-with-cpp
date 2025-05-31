#include<iostream>
#include<string>

class Solution {
    public:
        char kthCharacter(int k) {

            //- First intuition with an easy logic
            /* std::string word = "a";

            while(word.length() < k)
            {
                std::string temp("");
                for ( auto ch : word )
                {
                    if (ch == 'z')
                    {
                        ch = 96;
                    }
                    
                    temp += ch+1;
                }
                word += temp;
            }

            return word.at(k-1); */

            //- Count no. of 1s (binary rep.) in k and apply increment to 'a'
            
            k--;
            int increments = 0;
            while (k > 0) {
                increments += k & 1;
                k >>= 1;
            }
            return 'a' + (increments % 26);  
        }
};

int main()
{
    Solution s1;

    char ch = s1.kthCharacter(5);
    std::cout<<"5th char is "<<ch;
}