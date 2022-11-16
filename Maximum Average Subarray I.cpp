class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=k;
        vector<int>window;
        double sum=0;
        while(i<j){
            sum+=nums[i];
            i++;
        }
        double maxi=INT_MIN;
        double avg=sum/k;
        maxi=max(maxi,avg);
        i=0;
        while(j<nums.size()){
            sum+=nums[j];
            sum-=nums[i];
            i++;
            j++;
            avg=sum/k;
            
            maxi=max(maxi,avg);
        }
        
        return maxi;
    }
};
