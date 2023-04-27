class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        vector<int>temp=score;
        int curr=1; 
         unordered_map<int,string>mapping;
        sort(temp.begin(),temp.end(),greater<int>());
        for(int i=0;i<temp.size();i++){
            if(curr<=3){
                if(curr==1){
                    mapping[temp[i]]="Gold Medal";
                    curr++;
                }else if(curr==2){
                    mapping[temp[i]]="Silver Medal";
                    curr++;
                }else{
                    mapping[temp[i]]="Bronze Medal";
                    curr++;
                }
            }else{
                mapping[temp[i]]=to_string(curr);
                curr++;
            }
        }
        for(int i=0;i<score.size();i++){
            ans.push_back(mapping[score[i]]);
        }
        return ans;

    }
};
