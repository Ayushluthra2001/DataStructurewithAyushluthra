class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
        int i=0,j=0;
        vector<vector<int>>ans;
        while(i<s.length()){
            int first=-1;
            int second=-1;
            char start=s[i];
            j=i+1;
            int count=1;
            while(j<s.length() && start==s[j]){
                j++;
                count++;
            }
            if(count>=3){
                first=i;
                second=j-1;
              ans.push_back({first,second});
            }
            i=j;
        }
        return ans;
    }
};
