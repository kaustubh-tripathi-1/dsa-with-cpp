#include<iostream>
#include<stack>

/**
 * Counts the number of digits in a number
 * @param num The number to count the digits
 * @returns The no. of digits in the number  
*/
int countDigits(int num)
{
    int count = 0;
    
    while ( num > 0 )
    {
        count++;
        num /= 10;
    }

    return count;
    
}

int main()
{
    // Use a stack for complexity
    std::stack<int> numsStack;

    int num;
    std::cin>>num;

    int digitsCount = countDigits(num);
    int digitsCountCopy = (digitsCount % 2 != 0) ? (digitsCount - 1) : digitsCount;

    while ( digitsCountCopy > digitsCount/2)
    {
        numsStack.push(num % 10);
        num /= 10;
        digitsCountCopy--;
    }

    if ( digitsCount % 2 != 0 )
    {
        num /= 10;
    }

    if ( numsStack.size() != countDigits(num) )
    {
        std::cout<<"stack size: "<<numsStack.size()<<" count: "<<countDigits(num);
        std::cout<<"No";
        return 0;
    }
    
    while ( numsStack.size() != 0 && num > 0 )
    {
        if ( numsStack.top() != num % 10 )
        {
            std::cout<<"No";
            return 0;
        }
        numsStack.pop();
        num /= 10;
    }

    std::cout<<"Yes";

    return 0;
}