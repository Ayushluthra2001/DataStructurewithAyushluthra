#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int first;
        int second;
        int third;
        cin>>first>>second>>third;

        vector<int>ans;
        vector<int>temp;
        for(int i=0;i<first;i++){
            int k;
            cin>>k;
            ans.push_back(k);
        }
         for(int i=0;i<second;i++){
            int k;
            cin>>k;
            temp.push_back(k);
        }
        int count=0;
        for(int i=0;i<first;i++){
            for(int j=0;j<second;j++){
                if(ans[i]+temp[j]<=third) count++;
            }
        }
        cout<<count<<endl;
    }

}
