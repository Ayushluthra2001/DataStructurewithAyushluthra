class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxi=0;
        while(i<=j){
            int left=height[i];
            int right=height[j];
            int width=j-i;
            int length=min(left,right);
            int curr=length*width;
            maxi=curr>maxi ? curr:maxi;
            if(left>right)j--;
            else i++;
        }
        return maxi;
    }
};
