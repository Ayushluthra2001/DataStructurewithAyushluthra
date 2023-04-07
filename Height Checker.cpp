class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp=heights;
        int count=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<temp.size();i++){
            if(heights[i]!=temp[i]) count++;
        }
        return count;
    }
};
