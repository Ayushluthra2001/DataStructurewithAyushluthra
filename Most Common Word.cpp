class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int>mapping;
        
        for(auto i : banned){
            mapping[i]=-1;
        }
        int i=0;
        while(i<paragraph.length()){
            int j=i;
            string temp="";

            while(j<paragraph.length() && isalpha(paragraph[j])){
                temp+=tolower(paragraph[j]);
                j++;
            }
            if(temp.length()>=1 && mapping[temp]!=-1){
                mapping[temp]++;
            }
            i=j+1;

        }
       string ans="";
       int maxi=0;

        for(auto i : mapping){
            if(i.second>maxi){
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};
