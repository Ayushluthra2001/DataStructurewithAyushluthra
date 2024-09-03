class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        int i = 0;
        int j = 0;
        int maxi = 0;
        
        unordered_map<char,int>freq;
        while(j < s.length()){
            freq[s[j]]++;
            
                while(freq[s[j]] > 1){
                    freq[s[i]]--;
                    i++;
                }
            
           
            maxi = max(maxi , j-i+1);
                 
                 
                
            
            j++;
        }
        
        return maxi;
    }
};
