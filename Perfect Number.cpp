class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
             if(sum>num) return false;
        }
        cout<<sum<<endl;
        return sum==num;
    }
};
