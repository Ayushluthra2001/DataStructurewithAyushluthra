class Solution {
public:
    string oddString(vector<string>& words) {
      map<vector<int>,pair<string,int>>mapping;
        
        for(int i=0;i<words.size();i++){
           vector<int>ans;
            for(int j=0;j<words[i].size()-1;j++){
                int ch1=words[i][j+1]-'0';
                int ch2=words[i][j]-'0';
                ans.push_back(ch1-ch2);
            }
            auto it = mapping.find(ans);
            if(it!=mapping.end()){
                
                mapping[ans]={words[i],-1};
                
            }else{
                mapping[ans]={words[i],1};
            }
        }
        for(auto i : mapping){
            if(i.second.second==1) return i.second.first;
        }
        return  "";
    }
};
