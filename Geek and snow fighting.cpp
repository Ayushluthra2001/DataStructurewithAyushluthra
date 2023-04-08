class Solution {
public:
    int snowball(int N, vector<int> weights){
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=weights[i];
        }
        return sum;
    }
};
