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
        int count=0;
        while(n>0){
            if(n>=100){
                n=n-100;
            }else if(n>=20){
            n=n-20;
            }else if(n>=10){
            n=n-10;

            }else if(n>=5){
                n=n-5;

            }else {
            n=n-1;

            }
            count++;
        }
        cout<<count<<endl;




    //}
    return 0;
}
