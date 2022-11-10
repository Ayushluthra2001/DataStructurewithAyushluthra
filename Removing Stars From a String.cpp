class Solution {
public:
    string removeStars(string s) {
        
        int count=0;
        string ans="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='*') count++;
            else if(s[i]!='*' && count==0){
                ans+=s[i];
            }
            else{
                if(count>0)
                    count--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
