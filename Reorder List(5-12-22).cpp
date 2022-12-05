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
    void reorderList(ListNode* head) {
        vector<int>nodes;
        ListNode* temp=head;
        while(temp!=NULL){
            nodes.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans;
        int start=0;
        int end=nodes.size()-1;
        while(start<=end){
            if(start!=end){
                ans.push_back(nodes[start]);
                ans.push_back(nodes[end]);
                start++;
                end--;
            }else{
                ans.push_back(nodes[start]);
                start++;
            }
            
        }
        temp=head;
        for(int i=0;i<ans.size();i++){
            temp->val=ans[i];
            temp=temp->next;
        }
        
    }
};
