class Solution {
public:
int firstPosition(vector<int>&nums,int target){
    int pos=-1;
    int start=0,end=nums.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            pos=mid;
            end=mid-1;
        }else if(nums[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }

        
    }
    return pos;
}
int lastPosition(vector<int>&nums,int target){
    int pos=-1;
    int start=0,end=nums.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            pos=mid;
            start=mid+1;
        }else if(nums[mid]>target) end=mid-1;
        else start=mid+1;
    }
    return pos;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstPosition(nums,target);
        int last=lastPosition(nums,target);
        return {first,last};
    }
};
