class Solution {
public:
    vector<int> constructRectangle(int area) {
        int l=0,w=0;
        int mini=INT_MAX;
        for(int i=1;i<=area;i++){
            int length=area/i;
            long long c= (long) i*(long)length;
            if(area==c && length>=i && mini>=length-i){
                l=length;
                w=i;
                mini=length-i;
            }
        }
        return {l,w};
    }
};
