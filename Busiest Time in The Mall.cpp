#include <iostream>
#include <vector>
#include<map>

using namespace std;

int findBusiestPeriod( const vector<vector<int> >& data ) 
{
  
  map<int,int>mapping;
  int person=0;
  for(int i=0;i<data.size();i++){
    int vistor=data[i][1];
    int state=data[i][2];
    int ts=data[i][0];
    if(state==1){
      
      person+=vistor;
    }
    else if(state==0){
      person-=vistor;
    }
    mapping[ts]=person;
  }
  for(auto i : mapping){
    cout<<i.first<<" "<<i.second<<" ";
  }
  
  int maxi=INT_MIN;
  int d=-1;
  for(auto i : mapping){
    if(maxi<i.second){
      d=i.first;
      maxi=i.second;
    }
  }
    
  return d;
  /*
  int n = data.size();
    int count = 0;
    int maxCount = 0;
   int  maxPeriodTime = 0;

    
for(int i=0;i<n;i++){
    if (data[i][2] == 1)
              count += data[i][1];
       else if (data[i][2] == 0)
            count -= data[i][1];
         if (i < n-1 and  data[i][0] == data[i+1][0])
            continue;
        if (count > maxCount)
        {
            maxCount = count;
            maxPeriodTime = data[i][0];
        }
}
  return maxPeriodTime;
  */
}

int main() {
  return 0;
}


/*While the question specifies explicitly that the data is sorted by time, your peer may miss this fact. Make sure your peer is aware of this as it’s an important part of the solution.
  
Another thing to pay attention to is that there could be multiple data points with the same timestamp. The mall has multiple entrances and visitors could be entering and exiting at different areas of the mall at the same time. This is important since data points with the same time stamp clearly cannot be regarded as different periods in algorithm.
  
Pay attention to code correctness and edge cases.

*/

