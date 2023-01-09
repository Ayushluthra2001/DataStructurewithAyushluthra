#include <iostream>
#include <vector>

using namespace std;

int indexEqualsValueSearch(const vector<int> &arr) 
{
  int start=0;
  int end=arr.size()-1;
  int ans=-1;
  while(start<=end){
    int mid=(start+end)/2;
    // [0, 1, 2, 3, 4]
    if(mid==arr[mid]) {
      ans=mid;
      end=mid-1;
    }else if(arr[mid]>mid){
      end=mid-1;
    }else{
      start=mid+1;
    }
   
  }
  return ans;
}

int main() {
  return 0;
}

