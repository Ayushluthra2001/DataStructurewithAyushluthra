class Solution {
public:
    bool ispossible(string ans){
        int start=0;
        int end=ans.length()-1;
        while(start<=end){
            if(ans[start]!=ans[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            int ch=s[i];
            if(isdigit(ch))ans+=s[i];
            else if(isalpha(ch) && ch!=' ' && ch!=','){
                if(isupper(ch)){
                    ans+=ch+32;
                }else{
                    ans+=s[i];
                }
            }
            
        }
        
        return ispossible(ans);
    }
};
