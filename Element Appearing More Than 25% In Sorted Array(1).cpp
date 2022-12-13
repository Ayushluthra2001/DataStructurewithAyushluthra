class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count=1,maxCount=0;
        int index=-1;
        int i=0,j=0,e=arr.size()-1;
        while(i<=e){
            j=i+1;
            count=1;
            while(j<=e && arr[i]==arr[j]) j++,count++;
            if(count>maxCount){
                maxCount=count;
                index=arr[i];
                
            }
            i=j;
        }
        
        return index;
    }
};
