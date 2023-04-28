class Solution {
public:
    string truncateSentence(string s, int count) {
        int i=0;
        int j=0;
        string ans="";
        while(i<count && j<s.length() ){
            int k=j;
            
            while(k<s.length() && s[k]!=' '){
               
                ans+=s[k];
                k++;
            }
            i++;
            
            if(k!=s.length() && i<count) ans+=' ';
            j=k+1;
        }
       
        return ans;
    }
};
