class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        unordered_map<int,int>mapping;
        int j=1;
        int i=0;
        long long sum=0;
        while(i<n){
            int rem=target-j;
            if(mapping.find(rem)==mapping.end()) {
                mapping[j]=1;
                sum+=j;
                j++;
                i++;
            }else{
                j++;
            }
        }
        return sum;
    }
};
