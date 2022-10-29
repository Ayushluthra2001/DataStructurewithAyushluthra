class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0; i--){
            if(carry==1){
                if(digits[i]+1<=9){
                    digits[i]+=1;
                    carry=0;
                }else{
                    digits[i]=0;
                    carry=1;
                }
            
            }
        }
        if(carry==1){
            digits.insert(digits.begin() + 0, 1);
        }
        return digits;
    }
};
