class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            bool gotit=true;
            for(int j=0;j<words[i].size();j++){
                if(find(allowed.begin(),allowed.end(),words[i][j])==allowed.end()) {
                    gotit=false;
                }
            }
            if(gotit) count++;
        }
        return count;
    }
};
