class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mapping;
        stack<int>s;
        vector<int>ans(nums1.size(),-1);
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]) s.pop();
            if(!s.empty()) mapping[nums2[i]]=s.top();
            else mapping[nums2[i]]=-1;
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mapping[nums1[i]]){
                ans[i]=mapping[nums1[i]];
            }else{
                ans[i]=-1;
            }
        }
        return ans;
    }
};
