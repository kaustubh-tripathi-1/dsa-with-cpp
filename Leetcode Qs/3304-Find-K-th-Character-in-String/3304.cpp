#include<iostream>
#include<string>

class Solution {
    public:
        char kthCharacter(int k) {
            std::string word = "a";

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

            return word.at(k-1);
        }
};

int main()
{
    Solution s1;

    char ch = s1.kthCharacter(5);
    std::cout<<"5th char is "<<ch;
}