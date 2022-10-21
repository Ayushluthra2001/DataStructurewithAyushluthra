// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#define lli long long int
#define ll long long

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    void merge(ll arr[], ll start, ll mid, ll end)
    {
        ll n = end - start + 1;
        
        ll aux[n]={0,};
        
        ll i = start;
        ll j = mid + 1;
        ll k = 0;
        
        while (i <= mid && j <= end)
        {
            if (arr[i] < arr[j])
            {
                aux[k++] = arr[i++]; 
            }
            else
            {
                aux[k++] = arr[j++];
            }
        }

        while (i <= mid)
        {
            aux[k++] = arr[i++]; 
        }
        
        while (j <= end)
        {
            aux[k++] = arr[j++]; 
        }
        
        for (i=start; i<=end; i++)
            arr[i] = aux[i-start];
    }
    
    void printArr(ll arr[], ll i, ll end)
    {
        cout << "range: " << i << " " << end << endl;
        for (; i<=end; i++)
            cout << arr[i] << " ";
        cout << endl;        
    }
    
    ll mergeSort(ll arr[], ll start, ll end, ll &count)
    {
        if (start == end)
            return count;

        ll mid = start + (end - start) / 2;
        
        mergeSort(arr, start, mid, count);
        mergeSort(arr, mid + 1, end, count);
        
        ll i = start;
        ll j = mid + 1;
        while (i <= mid)
        {
            while (j <= end && arr[j] < arr[i])
                j++;
            count += (j - mid - 1);
            i++;
        }

        merge(arr, start, mid, end);
        return count;
    }

    long long int inversionCount(long long arr[], long long N)
    {
        ll count = 0;
        mergeSort(arr, 0, N - 1, count);
        // printArr(arr, 0, N-1);

        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
