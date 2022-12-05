class Solution {
public:
    int mySqrt(int x) {
        long  i=1;
        while(i*i<=x){
            if(i*i==x) return int(i) ;
            i++;
            
        }
        return int(i-1);
        
    }
};
