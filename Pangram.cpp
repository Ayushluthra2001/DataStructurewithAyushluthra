#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;
    //cin>>t;

    //while(t--)
    //{
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=true;
        unordered_map<char,int>maping;

        for(int i=0;i<s.length();i++){

            char z=tolower(s[i]);
            maping[z]++;

        }

        if(maping.size()==26){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;

        }
    //}
    return 0;
}
