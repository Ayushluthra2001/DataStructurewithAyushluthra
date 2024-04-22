class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mapping;
        unordered_map<char,int>mapping2;
        for(auto i : word){
            if(islower(i))
                mapping[i]++;
        }
        int count=0;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                if(mapping.find(tolower(word[i]))!=mapping.end()){
                    mapping2[word[i]]++;
                }
            }
        }
         return mapping2.size();
    }
};
