#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<int> solve(vector<int>& insert,int n){
    vector<int>ans;
    map<int,int>mapping;
    map<int,vector<int>>sorted;
    
    for(int i=0;i<n;i++){
        mapping[insert[i]]++;
    }
   
    for(auto i : mapping){
        sorted[i.second].push_back(i.first);
    }
    
    for (auto i = sorted.rbegin(); i != sorted.rend(); ++i){
       
        for(int k=0;k<i->second.size();k++){
            for(int j=0;j<i->first;j++){
                ans.push_back(i->second[k]);
            }
        }
        
    }
return ans;
}
int main()
 {
	//code
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n);
        for (int i = 0; i < n; ++i) cin >> array[i];
        vector<int>ans=solve(array,n);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
