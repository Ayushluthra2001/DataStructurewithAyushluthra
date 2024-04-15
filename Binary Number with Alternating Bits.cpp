class Solution {
public:
bool solve(int n){
    int prev=-1;
    int curr=-1;
    while(n>0){
       curr=n%2;
       cout<<prev<<" "<<curr<<endl;
       if(prev!=-1 && prev==curr) return false;
       prev=curr;
        n=n/2;
    }
   
    return true;
}
    bool hasAlternatingBits(int n) {
        
        return solve(n);
        
        
    }
};
