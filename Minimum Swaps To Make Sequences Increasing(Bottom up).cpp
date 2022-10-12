class Solution {
public:
    int minSwap(vector<int>& nums1, vector<int>& nums2) {

        //it means that previous index were swapped or not 
            
            nums1.insert(nums1.begin(),-1);
            nums2.insert(nums2.begin(),-1);
            bool swapped=0;
            vector<vector<int>>dp(nums1.size()+1,vector<int>(2,0));
            
            for(int index=nums1.size()-1;index>=1;index--){
                for(int swapped=1;swapped>=0;swapped--){
                    int ans=INT_MAX;
                        int prev1=nums1[index-1];
                        int prev2=nums2[index-1];

                        if(swapped){
                            swap(prev1,prev2);
                        }

                        if(nums1[index]>prev1 && nums2[index]>prev2)
                            ans=min(ans,dp[index+1][0]);
                        if(nums1[index]> prev2 && nums2[index]>prev1)
                            ans=min(ans,1+dp[index+1][1]);

                         dp[index][swapped]=ans;
                }
            }
            return dp[1][1];
        
        }                                                         
};
