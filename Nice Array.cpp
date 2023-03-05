class solution{
public:
    int niceSubarray(int n, vector<int> &arr) {
        // code here
        int maxi=0;
        int i=0;
        int count=0;
        int index=1;
        while(i<n){
            if(arr[i]==index) {
                count=count+1;
                maxi=max(maxi,count);
                index++;
          
        }else {
            index=1;
            count=0;
        }
        i++;
        }
        return maxi;
    }
};
