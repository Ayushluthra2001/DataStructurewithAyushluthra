class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int left=0,right=0;
        left+= s[0]=='L' ? 1 : 0;
        right+=s[0]=='R' ? 1 : 0 ;
        int i=1;
        while(i<s.length()){
            if(s[i]=='L') left++;
            else right++;
            if(left==right) {
                count++;
                left=0;
                right=0;
            }
            i++;
        }
        return count;
    }
};
