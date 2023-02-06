class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
         sort(nums.begin(),nums.end());
         vector<int>ans;
        //  vector<int>prefix;

        for(int i=0;i<queries.size();i++){
            int maxSum=queries[i];
            int sum=0;
            int count=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                count++;
                if(sum>maxSum) {
                    count--;
                    break;
                }
                
            }
            ans.push_back(count);
        }
        return ans;
    }
};

