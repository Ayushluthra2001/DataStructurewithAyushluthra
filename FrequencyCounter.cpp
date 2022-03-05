#include<iostream>
#include<map>

using namespace std;

// function that calculate Frequency of an element present in array.

void FrequencyCounter(int arr[],int n)
{
    map<int,int>m;


    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for (auto x : m)
        cout << x.first << " " << x.second << endl;
}
// main function
int main()
{
    int n;
    cout<<"Enter No of Element in a array"<<endl;
    cin>>n;

    cout<<"Enter Elements "<<endl;

    //Allocate Heap memory
    int *arr = new int[n];

    // taking input from user
    for(int i=0;i<n;i++)
        cin>>arr[i];

    // function call
    FrequencyCounter(arr,n);

    //Deallocate Heap memory
    delete []arr;
    return 0;
}
