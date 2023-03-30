class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            int left=-1,right=-1;
            
            for(int j=i;j>=0;j--){
                if(s[j]==c){
                    left=j;
                    break;
                }
            }
            for(int j=i;j<s.length();j++){
                if(s[j]==c){
                    right=j;
                    break;
                }
            }
            if(left==-1){
                ans.push_back(abs(i-right));
            }else if(right==-1){
                ans.push_back(abs(i-left));
            }else{
                ans.push_back(min(abs(i-left),abs(i-right)));
            }
        }
        return ans;
    }
};
