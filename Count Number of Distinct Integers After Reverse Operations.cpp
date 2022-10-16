class Solution {
public:
    int reversed(int x){
        string temp=to_string(x);
        reverse(temp.begin(),temp.end());
        return stoi(temp);
        
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(reversed(nums[i]));
        }
        map<int,int>count;
        for(int i=0;i<nums.size();i++){
           
            count[nums[i]]++;
        }
            
         
        return count.size();
    }
};
