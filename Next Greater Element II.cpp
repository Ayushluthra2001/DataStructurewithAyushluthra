class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        vector<int>ans(nums.size(),-1);
        for(int i=2*nums.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums[i%nums.size()]) s.pop();
            if(i<nums.size()){
                if(!s.empty()){
                    ans[i]=s.top();
                }else{
                    ans[i]=-1;
                }
            }
            s.push(nums[i%nums.size()]);
        }
        return ans;
    }
};
