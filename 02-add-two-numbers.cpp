 class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* t1 = l1;
            ListNode* t2 = l2;
    
            ListNode* r = new ListNode();
            ListNode* t = r;
            int sum, digit;
            int carry = 0;
    
            while (t1 || t2 || carry) {
                ListNode* newNode = new ListNode();
    
                sum = (t1 ? t1->val : 0) + (t2 ? t2->val : 0) + carry;
                digit = sum % 10;
                carry = sum / 10;
    
                newNode->val = digit;
                t->next = newNode;
                t = newNode;
    
                t1 = t1 ? t1->next : nullptr;
                t2 = t2 ? t2->next : nullptr;
            }
    
            return r->next;
        }
    };