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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        vector<int>el;
        ListNode* temp=head;
        while(temp!=NULL){
            el.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans=el;
        for(int i=0;i<ans.size();i++){
            ans[(i+k)%ans.size()]=el[i];
        }
    
        ListNode* dummy = new ListNode(-1);
        temp=dummy;
        for(int i=0;i<ans.size();i++){
            temp->next=new ListNode(ans[i]);
            temp=temp->next;
        }

        return dummy->next;

    }
};
