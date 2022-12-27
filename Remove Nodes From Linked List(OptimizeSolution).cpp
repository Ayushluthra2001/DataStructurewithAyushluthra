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
    ListNode* removeNodes(ListNode* head) {
        vector<int>el;
        ListNode* temp=head;
        while(temp!=NULL){
            el.push_back(temp->val);
            temp=temp->next;
        }
        stack<int>s;
        
        s.push(el[el.size()-1]);
        for(int i=el.size()-2;i>=0;i--){
            if(s.top()<=el[i]){
                s.push(el[i]);
                
            }
        }
        ListNode* dummy = new ListNode(-1);
        temp=dummy;
        while(!s.empty()){
            temp->next = new ListNode(s.top());
            s.pop();
            temp=temp->next;

        }
        return dummy->next;
    }
};
