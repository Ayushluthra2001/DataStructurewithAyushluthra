class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freq(26,0),freq2(26,0);
        for(auto i : ransomNote){
            freq[i-'a']++;
        }
        for(auto j : magazine){
            freq2[j-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(freq[ransomNote[i]-'a']>freq2[ransomNote[i]-'a']) return false;
        }
        return true;
    }
};
