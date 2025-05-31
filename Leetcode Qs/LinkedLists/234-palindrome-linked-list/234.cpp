#include<iostream>
#include<stack>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseLinkedList(ListNode *start)
    {
        ListNode *previous = nullptr, *current = start;

        while( current )
        {
            ListNode *next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }

        return previous;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
        {
            return true;
        }
        
        //- Use a stack to to store values in reverse order, TC - O(n), SC - O(n)
        /* std::stack<int> s;
        ListNode *traverse = head;

        //$ Traverse the list and push all values in the stack
        while(traverse)
        {
            s.push(traverse->val);
            traverse = traverse->next;
        }

        ListNode *traverse2 = head;
        while(!s.empty() && traverse2)
        {
            int currentVal = s.top();

            if(currentVal != traverse2->val)
            {
                return false;
            }

            s.pop();
            traverse2 = traverse2->next;
        }

        return true; */

        //- Use fast and slow pointers to reach the middle of the list and reverse the second half and then compare, TC - O(n), SC - O(1)
        
        ListNode *slow = head, *fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *newMiddle = reverseLinkedList(slow);

        ListNode *traversefromHead = head;
        while(traversefromHead->next != slow)
        {
            traversefromHead = traversefromHead->next;
        }

        traversefromHead->next = newMiddle;
        
        ListNode *traversefromMiddle = newMiddle;
        traversefromHead = head;

        while(traversefromMiddle && traversefromHead != newMiddle)
        {
            if(traversefromHead->val != traversefromMiddle->val)
            {
                return false;
            }
            traversefromHead = traversefromHead->next;
            traversefromMiddle = traversefromMiddle->next;
        }

        return true;
    }
};