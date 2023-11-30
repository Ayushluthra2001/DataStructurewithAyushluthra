#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;
    //cin>>t;

    //while(t--)
    //{

        string s;
        getline(cin,s);

        unordered_map<char,int>maping;


        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]))
                maping[s[i]]++;
        }
        cout<<maping.size()<<endl;




    //}
    return 0;
}
