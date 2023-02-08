class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int i=left;i<=right;i++){
            bool check=false;
            for(int j=0;j<ranges.size();j++){
                int first=ranges[j][0];
                int second=ranges[j][1];
                if(first<=i && i<=second){
                    check=true;
                    break;
                }
            }
            if(check==false) return false;
        }
        return true;
    }
};
