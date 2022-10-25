class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
         vector<int>ans;
        map<int,int>mapping;
        for(int i=0;i<v1.size();i++){
            mapping[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++){
            auto it = mapping.find(v2[i]);
            if(it!=mapping.end() && it->second>0){
                ans.push_back(v2[i]);
                it->second--;
            }
        }
        
        return ans;
    }
};
