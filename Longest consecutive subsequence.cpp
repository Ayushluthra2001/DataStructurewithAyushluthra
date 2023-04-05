//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      map<int,int>mapping;
      for(int i=0;i<N;i++){
          mapping[arr[i]]++;
      }
      int longest=0;
      int prev=-1;
      int count=0;
      for(auto i : mapping){
          if(prev==-1){
              prev=i.first;
              
              count++;
              longest=max(longest,count);
          }else if(abs(prev-i.first)==1){
              prev=i.first;
              
              count++;
              longest=max(longest,count);
             
          }else{
              prev=i.first;
              longest=max(longest,count);
              count=1;
          }
         
      }
       
       return longest;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
