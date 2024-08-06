class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        unordered_map<int,int>mapping;
        int curr = 2;
    
        for(auto i : word){
            if(curr > 9) curr = 2;

            mapping[curr]++;
            ans += mapping[curr];

            curr++;
        }
        


        return ans; 
    }
};
