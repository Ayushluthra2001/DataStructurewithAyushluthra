class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int mid=ans.size()/2;
        if(ans.size()%2!=0)
        return ans[mid];
        double med=ans[mid]+ans[mid-1];
        return med/2;
    }
};
