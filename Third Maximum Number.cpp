class Solution {
public:
    int thirdMax(vector<int>& num) {
        unordered_map<int,int>mapping;
        for(auto i : num){
            mapping[i]++;
        }
        vector<int>nums;
        for(auto i : mapping){
            nums.push_back(i.first);
        }
        int first=nums[0],second=INT_MIN,third=INT_MIN;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]>first){
                third=second;
                second=first;
                first=nums[i];
                
            }else if(nums[i]!=first && second<nums[i]){
                third=second;
                second=nums[i];
                
            }else if(nums[i]!=second && nums[i]!=first && third<nums[i]){
                third=nums[i];
                
            }
        }
        if(nums.size()<3) return first;
        return third;
    }
};
