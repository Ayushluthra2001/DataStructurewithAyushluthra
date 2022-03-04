#include<iostream>
using namespace std;

// function that return bool value : True if Element found and false if element is not found
// Assuming that all elements in sorted order
bool BinarySearch(int arr[], int n, int key)
{
    int start =0;
    int End =n;
    int middle = 0;
    while(start<=End)
    {
        middle = start+(End-start)/2;
        if(arr[middle]==key)
            return true;
        else if(arr[middle]>key)
            End = middle-1;
        else
            start = middle+1;

    }
    return false;
}
// main function
int main()
{
    int n,key;
    cout<<"Enter No of Element in a array"<<endl;
    cin>>n;

    cout<<"Enter Elements (sorted order) "<<endl;
    //Allocate Heap memory
    int *arr = new int[n];

    // taking input from user
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter key "<<endl;
    cin>>key;

    // function call
    if(BinarySearch(arr,n,key))
    {
        cout<<"Element Found"<<endl;

    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }

    //Deallocate Heap memory
    delete []arr;
    return 0;
}
