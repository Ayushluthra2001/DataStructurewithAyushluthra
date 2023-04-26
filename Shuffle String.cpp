class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>change(indices.size(),' ');
        for(int i=0;i<indices.size();i++){
            change[indices[i]]=s[i];
        }
        s="";
        for(auto i : change){
            s+=i;
        }
        return s;
    }
};
