/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int>data;
        ListNode* temp=head;
        while(temp!=NULL){
            data.push_back(temp->val);
            temp = temp->next;
        }
        sort(data.begin(),data.end());
        ListNode* dummy =new ListNode(-1);
        temp = dummy;
        for(int i=0; i<data.size(); i++){
            temp->next =new ListNode(data[i]);
            temp = temp->next;

        }
        return dummy->next;
    }
};
