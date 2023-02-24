class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mapping;
        while(1){
            int val=0;
            while(n>0){
                int curr=n%10;
                val+=curr*curr;
                n=n/10;
            }
            if(val==1) return true;
            if(mapping[val]==1){
                return false;
            }else {
                mapping[val]=1;
            }
            n=val;
        }
        return false;
    }
};
