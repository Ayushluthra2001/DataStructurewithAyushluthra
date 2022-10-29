class Solution {
public:
    bool isPowerOfTwo(int n) {
        int countBit=0;
        while(n>0){
            if(n%2==1) countBit++;
            n=n/2;
        }
        if(countBit==1) return true;
        return false;
    }
};
