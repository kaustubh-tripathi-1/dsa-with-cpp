struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int decimal = 0;

        ListNode *traverse = head;

        while(traverse)
        {
            decimal = (decimal*2) + traverse->val;
            traverse = traverse->next;
        }

        return decimal;
    }
};