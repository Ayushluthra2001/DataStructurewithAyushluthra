#include<iostream>
using namespace std;

// function that return bool value : True if Element found and false if element is not found
bool linearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return true;

    }
    return false;
}
// main function
int main()
{
    int n,key;
    cout<<"Enter No of Element in a array"<<endl;
    cin>>n;

    cout<<"Enter Elements "<<endl;
    //Allocate Heap memory
    int *arr = new int[n];

    // taking input from user
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter key "<<endl;
    cin>>key;

    // function call
    if(linearSearch(arr,n,key))
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
