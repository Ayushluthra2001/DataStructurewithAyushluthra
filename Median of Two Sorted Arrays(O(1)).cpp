class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int i=0,j=0,n=nums1.size(),m=nums2.size();
        int count=0;
        int mid=(n+m)/2;
        double find,find2;
            while(i<n && j<m && count<=mid){
            if(nums1[i]>=nums2[j]){
                find=find2;
                find2=nums2[j++];
                count++;
                
            }else{
                find=find2;
                find2=nums1[i++];
                count++;
            }
        }
        while(i<n && count<=mid){
            find=find2;
            find2=nums1[i++];
            count++;
        }
        while(j<m && count<=mid ){
            find=find2;
            find2=nums2[j++];
            count++;
        }
        if((n+m)%2!=0){
            return find2;
        }
        double med=find+find2;
        return med/2;
        
        
        
    }
};
