//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int activitySelection(vector<int> start, vector<int> end, int n)

    {
    //Function to find the maximum number of activities that can
    //be performed by a single person.
     vector<vector<int>> vc;

        for(int i=0;i<n;i++){

            vc.push_back({end[i],start[i]});

        }

        sort(vc.begin(),vc.end());

        int t=1;

        int st=vc[0][0];

        for(int i=1;i<n;i++){

            if(vc[i][1]>st){

                t++;

                st=vc[i][0];

            }

        }

        return t;

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
