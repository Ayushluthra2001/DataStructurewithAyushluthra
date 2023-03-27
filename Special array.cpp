 class Solution{
 public:
    bool specialArray(int n, vector<int> &arr) {
        // code here
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum>=arr[i]) return false;
            sum+=arr[i];
        }
        return true;
    }
}
