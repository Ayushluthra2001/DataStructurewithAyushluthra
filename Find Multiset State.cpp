#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        
        int t;
        cin>>t;
        while(t--){
            int n , k; 
            cin>>n>>k;
            
            vector<int>temp(n,0);
            for(int i = 0;i <n ;i++) cin>>temp[i];
            
            int i = 0;
            int j = temp.size()-1;
            while(k--){
                int sum = temp[i] + temp[j];
                temp[j] = sum;
                i++;
            }
            
            for(j = i;j<temp.size();j++) cout<<temp[j]<<" ";
            cout<<endl;
            
            
        }
        
        return 0;
}
