vector<int> findDifferenceArray(int N, vector<int> &A) {
        // code here
        vector<int>prefix(N,0);
        vector<int>suffix(N,0);
        vector<int>ans;        
        prefix[N-1]=0;
        
        int curr=A[N-1];
        for(int i=N-2;i>=0;i--){
            prefix[i]=curr;
            curr=min(curr,A[i]);
        }
        
         curr=A[0];
        for(int i=1;i<N;i++){
            suffix[i]=curr;
            curr=min(curr,A[i]);
        }
        for(int i=0;i<N;i++){
            ans.push_back(suffix[i]-prefix[i]);
        }
        return ans;
    }
