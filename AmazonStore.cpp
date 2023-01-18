// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int>pos,mf,mi;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        pos.push_back(k);
    }
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        mf.push_back(k);
    }
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        mi.push_back(k);
    }
    map<int,int>mapping;
    for(int i=0;i<pos.size();i++){
        mapping[pos[i]]=pos[i];
    }
    for(int i=0;i<m;i++){
        if(mapping.find(mf[i])!=mapping.end()) {
            mapping.erase(mf[i]);
            mapping[mi[i]]=mi[i];
        }
    }
    vector<int>ans;
    for(auto i : mapping){
        ans.push_back(i.first);
    }
    for(auto i : ans){
        cout<<i<<" ";
        
    }
    cout<<endl;
    return 0;
}// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int>pos,mf,mi;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        pos.push_back(k);
    }
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        mf.push_back(k);
    }
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        mf.push_back(k);
    }
    map<int,int>mapping;
    for(int i=0;i<pos.size();i++){
        mapping[pos[i]]=pos[i];
    }
    for(int i=0;i<m;i++){
        if(mapping.find(mf[i])!=mapping.end()) {
            mapping.erase(mf[i]);
            mapping[mi[i]]=mf[i];
        }
    }
    vector<int>ans;
    for(auto i : mapping){
        ans.push_back(i.first);
    }
    for(auto i : ans){
        cout<<i<<" ";
        
    }
    cout<<endl;
    return 0;
}
