class Solution {
public:
    long long sum(long long N, long long M){
        // code here
        long long x=__gcd(N,M);
        
        return N/x+M/x;
        
        
    }
};
