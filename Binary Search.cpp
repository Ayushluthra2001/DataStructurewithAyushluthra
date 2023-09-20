int search(vector<int> &nums, int target) {
    // Write your code here.
    int start=0;
    int end=nums.size();
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]>target){
            end=mid-1;
        }else if(nums[mid]<target){
            start=mid+1;
        }else{
            return mid;
        }
    }
    return ans;
}
