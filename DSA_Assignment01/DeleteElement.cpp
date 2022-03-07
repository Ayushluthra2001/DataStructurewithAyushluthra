// codewith_Ayushluthra

#include<iostream>
using namespace std;
int main()
{
    int arr[100], size, i, element, j, found=0;
    cout<<"Enter the Size of array: ";
    cin>>size;
    cout<<"Enter "<<size<<" Array Elements: ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>element;
    for(i=0; i<size; i++)
    {
        if(arr[i]==element)
        {
            for(j=i; j<(size-1); j++)
                arr[j] = arr[j+1];
            found=1;
            i--;
            size--;
        }
    }
    if(found==0)
        cout<<"\nElement is not present in array!";
    else
    {
        cout<<"\nElement Deleted Successfully!";
        cout<<"\n\nThe New Array is:\n";
        for(i=0; i<size; i++)
            cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
