#include <iostream>
#include <vector>

using namespace std;

int calcDroneMinEnergy( const vector<vector<int>>& route ) 
{
  // your code goes here
  int energy=0;
  int currmaxi=route[0][2];
  for(int i=1;i<route.size();i++){
      if(currmaxi<route[i][2]){
        energy+=route[i][2]-currmaxi;
        currmaxi=route[i][2];
      }
  }
  return energy;
  
}

int main() {
  return 0;
}

