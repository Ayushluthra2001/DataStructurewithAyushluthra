// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;
        int end=n;
        int firstBadVersion=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(!isBadVersion(mid)){
               start=mid+1;
                
            }else{
                 firstBadVersion=min(firstBadVersion,mid);
                 end=mid-1;
            }
            
        }
        return firstBadVersion;
    }
};
