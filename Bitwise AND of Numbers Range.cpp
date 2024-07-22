class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shifted = 0;

        while(left >0 && right >0){
            if(left == right) break;
            shifted++;
            left = left>>1;
            right = right>>1;
        }
        if(left != right) return 0;
       while(shifted--){
         left=left<<1;
       }

        return left;
    }
};
