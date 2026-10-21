class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        for (ListNode* p = head; p; p = p->next)
            v.push_back(p->val);
        sort(v.begin(), v.end());

        ListNode* p = head;
        for (int x : v) {
            p->val = x;
            p = p->next;
        }

        return head;
    }
};