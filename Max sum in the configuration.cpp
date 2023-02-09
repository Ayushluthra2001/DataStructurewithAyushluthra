//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int n)
{
//Your code here
int sum=0;
int sum2=0;
for(int i=0;i<n;i++){
    sum+=A[i];
    sum2+=A[i]*i;
}
int maxi=sum2;
for(int i=0;i<n;i++){
    int nextSum=sum2+sum-n*A[n-1-i];
    maxi=max(maxi,nextSum);
    sum2=nextSum;
}



return maxi;
}
