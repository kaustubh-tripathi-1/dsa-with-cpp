struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        //- Empty Linked List
        if(!head)
        {
            return head;
        }

        //- Linked List with 1 node
        if(!head->next)
        {
            delete head;
            head = nullptr;
            return head;
        }

        ListNode *slow = head, *fast = head, *prev = nullptr;

        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;
        delete slow;

        return head;
    }
};