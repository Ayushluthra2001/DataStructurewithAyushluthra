class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mapping;
        for(auto i : target){
            mapping[i]++;
        }
        for(auto i : arr){
            mapping[i]--;
        }
        for(auto i : mapping){
            if(i.second!=0) return false;
        }
        return true;
    }
};
