class Solution {
public:
    int maxScore(string s) {
        int maxScore=0;
        for(int i=0;i<s.length()-1;i++){
            int left=0,right=0;
            
            for(int j=i;j>=0;j--){
                if(s[j]=='0') left++;
            }
            
            for(int j=i+1;j<s.length();j++){
                if(s[j]=='1') right++;
                
            }
            
            maxScore=max(maxScore,left+right);
        }
        return maxScore;
    }
};
