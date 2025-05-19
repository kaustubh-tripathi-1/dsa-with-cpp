#include<iostream>
#include<string>
#include<algorithm>

void decimalToBinary(unsigned int num, std::string& binary)
{
    if ( num == 0 )
    {
        binary.push_back('0');
        return;
    }

    while ( num > 0 )
    {
        binary.push_back('0' + num % 2);
        num /= 2;
    }

}

int main()
{
    unsigned int num;
    std::cin>>num;
    std::string binary("");
    decimalToBinary(num, binary);
    
    std::reverse(binary.begin(), binary.end());
    
    std::cout<<binary;
    
    return 0;
}