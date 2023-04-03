class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        string ans="";
        
        while(i<s.length()){
           
            if(isalpha(s[i])){
                ans+=s[i];
            }
            i++;
                
        }
        reverse(ans.begin(),ans.end());
        i=0;
        int j=0;
        while(i<ans.length() && j<s.length()){
            if(isalpha(s[j])){
                s[j]=ans[i];
                j++;
                i++;
            }else{
                j++;
            }
        }
        return s;
    }
};
