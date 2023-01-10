class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxi=0;
        for(int i=0;i<words.size();i++){
            map<int,int>mapping;
            for(auto j : words[i]){
                mapping[j]++;
            }
            for(int j=i+1;j<words.size();j++){
                bool if_any=false;
                for(auto k : words[j]){
                    if(mapping.find(k)!=mapping.end()) {
                        if_any=true;
                        break;
                    }
                    
                }

                if(!if_any){
                       
                        int a=words[i].length();
                        int b=words[j].length();
                       
                        maxi=max(maxi,a*b);
                    }
            }
        }
        return maxi;
    }
};
