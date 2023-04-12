class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>freq;
        for(int i=0;i<s.length();i++){
            
            freq[s[i]-'a']++;
        }
        int count=0;
        int odd=0;
        for(auto i : freq){
            if(i.second%2==0) count+=i.second;
            else if(i.second==1) odd=1;
            else {
                count+=i.second-1;
                odd=1;
            }
        }
        return count+odd;
    }
};
