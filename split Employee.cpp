class Solution {
  public:
    int splitEmployees(int n, string s[]) {
        // code here
        int count=0;
        map<char,int>mapping;
        for(int i=0;i<n;i++){
            char st=s[i][0];
            mapping[st]++;
        }
        for(auto i : mapping){
            if(i.second>2){
                int ans=i.second-1;
                count+=ans;
            }
        }
        return count;
    }
};
