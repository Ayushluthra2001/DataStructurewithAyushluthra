class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mapping1;
        map<int,vector<int>>mapping2;
        for(auto i : nums){
            mapping1[i]++;
        }
        for(auto i : mapping1){
            mapping2[i.second].push_back(i.first);
        }
        vector<int>ans;
        for(auto i : mapping2){
            vector<int>temp=i.second;
            sort(temp.begin(),temp.end(),greater<int>());
            int loop=i.first;
            for(int j=0;j<temp.size();j++){
                for(int k=0;k<loop;k++){
                    ans.push_back(temp[j]);
                }
            }
        }
        return ans;
    }
};
// [2,3,1,3,2]
// 1 : 1 
// 2 : 2
// 3 : 2

// 1 : 1
// 2 : 2 3 
