class Solution {
public:
    int solve(int index,int endingIndex, vector<int>& slices,int n ){
        if(n==0 || index>endingIndex){
            return 0;
        }
        int take=slices[index]+solve(index+2,endingIndex,slices,n-1);
        int nottake=0+solve(index+1,endingIndex,slices,n);
        return max(take,nottake);
    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        int case1=solve(0,k-2,slices,k/3); //  when i will be eating first slice then i can't eat last slice 
        int case2=solve(1,k-1,slices,k/3); // when i will not eating first slice 
        return max(case1,case2);
    }
};
