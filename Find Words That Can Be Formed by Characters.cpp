class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      int ans=0;
      unordered_map<char,int>mapping;
      for(auto i : chars){
        mapping[i]++;
      }  
      for(auto i : words){
        string curr=i;
        unordered_map<char,int>mapping2;
        for(auto i : curr){
            mapping2[i]++;
        }
        bool got=true;
        for(auto i : mapping2){
            if(mapping.find(i.first)==mapping.end()) {
               // cout<<curr<<" "<<i.first<<" "<<i.second<<endl;
               got=false;
            }
            if(mapping[i.first]<i.second) {
                //cout<<curr<<" "<<i.first<<" "<<i.second<<endl;
                got=false;
            
            }
        }
        // if(got)cout<<"Hello"<<endl;
        if(got) ans+=curr.length();
      }
      return ans;
    }
};
