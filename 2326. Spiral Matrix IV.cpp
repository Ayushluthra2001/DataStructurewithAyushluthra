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
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) {
       
        ListNode* temp = head;
        
        int total = m * n;
        int startCol  = 0;
        int startRow = 0;
        int endCol = m-1;
        int endRow = n-1;
        int count = 0;
         vector<vector<int>>ans(n,vector<int>(m,-1));
        while(count < total && temp!=NULL){
           // cout<<"Hello"<<endl;
            for(int i=startCol; i<=endCol; i++){
                if(temp==NULL) return ans;
                ans[startRow][i] = temp->val;
                count++;
                temp= temp ->next;
            }
            if(count == total || temp == NULL) return ans;
            startRow++;
            for(int i=startRow; i<=endRow; i++){
                if(temp == NULL) return ans;
                count++;
                ans[i][endCol] = temp->val;
                temp = temp ->next;

            }
            if(count == total || temp == NULL) return ans;
            endCol--;
            for(int i=endCol;i>=startCol;i--){
                if(temp == NULL) return ans;
                ans[endRow][i] = temp->val;
                count++;
                temp = temp->next;

            }
            if(count == total || temp==NULL) return ans ;
            endRow --;
            for(int i=endRow;i>=startRow;i--){
                if(temp== NULL) return ans;
                ans[i][startCol] = temp->val;
                count++;
                temp = temp ->next;
            }
            if(count == total || temp  == NULL) return ans;
            startCol ++;

        }
        return ans;
    }
};
