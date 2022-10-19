class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int x=original.size();
        if(m*n!=x)
            return {};
        vector<vector<int>>ans(m,vector<int>(n,0));
        int i=0,j=0;
        for(int k=0;k<x;k++){
            if(j==n-1){
                ans[i][j]=original[k];
                i++;
                j=0;
                
            }else{
                ans[i][j]=original[k];
                j++;
            }
        }
        return ans;
    }
};
