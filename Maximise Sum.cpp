#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>temp(n, 0);
        for(int i = 0;i<n;i++) cin>>temp[i];
        
       long long maxSum = 0;
       long long count =0 ;
       long long minSmall = 1e6;
       for(int i = 0;i<n; i++){
                maxSum += abs(temp[i]);
                if(temp[i] < 0) count++;
       
                long long small = abs(temp[i]);
                if(minSmall > small) minSmall = small;
           
       }
       
       if(count %2 ==0) cout<<maxSum<<endl;
       else {
          
           int extra = 2 * minSmall;
           
           cout<<maxSum - extra<<endl;
       }
    }
        
        return 0;
}
