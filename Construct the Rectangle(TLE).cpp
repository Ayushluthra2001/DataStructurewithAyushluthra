class Solution {
public:
    vector<int> constructRectangle(int area) {
        int start=sqrt(area);
        int mini=INT_MAX;
        int l=0,w=0;
        for(int i=start;i<=area;i++){
            for(int j=start;j>=1;j--){
                long long  c= (long) i *(long) j;
                    if(area==c){
                        if(mini>=abs(i-j)){
                            mini=abs(i-j);
                            l=i;
                            w=j;
                            
                        }
                    }
                }
            }
        
            
        return {l,w};
    }
};
