class Solution {
public:
    int strStr(string s, string x) {
        int j,k;
        for(int i=0;i<s.length();i++){
            int start=i;
             j=0;
             k=i;
             while(j<x.length() && s[k]==x[j]) {
                 k++;
                 j++;
             }
             if(j==x.length()) return start;  
        }
     return -1;
    }
};
