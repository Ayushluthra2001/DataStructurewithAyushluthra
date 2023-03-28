class Solution {
public:
    bool solve(int n){
        int temp=n;
        while(temp>0){
            int x= temp%10;
            if(x==0 || n%x!=0) return false;
            temp=temp/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(solve(i)) ans.push_back(i);
        }
        return ans;
    }
};
