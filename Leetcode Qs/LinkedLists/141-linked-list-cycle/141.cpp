struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
        {
            return false;
        }

        //- Use fast and slow pointers and they will meet for sure if there is a cycle, TC - O(n), SC - O(1)
        ListNode *slow = head, *fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                return true;
            }
        }

        return false;
    }
};