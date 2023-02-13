//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
                                int q) {
        // code here
        vector<bool>ans;
        for(int i=0;i<queries.size();i++){
            int first=queries[i].first;
            int second=queries[i].second;
            int mid=(first+second)/2;
            //  cout<<first<<" "<<second<<" "<<mid<<endl;
            
            bool completed=true;
            bool done=false;
            for(int j=first+1;j<=second && completed;j++){
                if(a[j-1]>a[j]){
                    completed=false;
                }
            }
            if(completed ){
                ans.push_back(1);
                done=true;
                
                // cout<<"done"<<i<<endl;
            }
            completed=true;
            for(int j=first+1;j<=second && completed;j++){
                if(a[j-1]<a[j]){
                    completed=false;
                }
            }
            if(completed==true && done==false ){
                ans.push_back(1);
               
                // cout<<"done"<<i<<endl;
                done=true;
            }else if(!done){
                
                        bool check=true;
                        int j;
                        for(j=first+1;j<=second && check;j++){
                             //cout<<j<<" "<<a[j-1]<<" "<<a[j]<<endl;
                        if(a[j-1]>a[j]){
                            check=false;
                             break;  
                            }
                        }
                       
                        check=true;
                        for(j=j+1;j<=second && check;j++){
                            if(a[j-1]<a[j]) {
                                check=false;
                                break;
                               
                            }
                        }
                        // cout<<j<<endl;
                        // cout<<"done"<<i<<endl;
                        if(j-1==second){
                            ans.push_back(true);
                        }else{
                            ans.push_back(false);
                        }
                    }
            
            
        }
        
        return ans;
    }
};
// 16
// 20100 18567 28921 1674 15070 22105 30501 27861 26854 23860 16321 15477 11502 10759 4293 3626
// 16
// 13 14
// 3 14
// 8 8
// 3 5
// 0 3
// 2 6
// 10 10
// 14 14
// 3 15
// 7 11
// 10 10
// 9 9
// 14 15
// 11 11
// 9 12
// 7 10
    // 3   4       5 6      7    8      9   10
// 1674 15070 22105 30501 27861 26854 23860 16321 15477 11502 10759 4293

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, i, q;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> q;
        vector<pair<int, int>> queries(q);
        for (i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }
        Solution obj;
        auto v = obj.processQueries(a, n, queries, q);
        for (bool u : v) {
            cout << (u ? "Yes\n" : "No\n");
        }
    }
    return 0;
}
// } Driver Code Ends
