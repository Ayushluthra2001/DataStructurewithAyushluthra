class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mapping;
        map<char,int>mapping2;
        for(int i=0;i<s.length();i++){
            mapping[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mapping2[t[i]]++;
        }
        if(mapping.size()!=mapping2.size()) return false;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(mapping[ch]!=mapping2[ch]) return false;
        }
        return true;
    }
};
