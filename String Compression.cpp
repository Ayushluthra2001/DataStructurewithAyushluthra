class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int i=0;
        while(i<chars.size()){
            char t=chars[i];
            int temp=1;
            int j=i+1;
            while(j<chars.size() && t==chars[j]){
                temp++;
                i++;
                j++;
            }
            i++;
            ans+=t;
            if(temp>1)
                ans+=to_string(temp);
        }
        chars.clear();
        for(int i=0;i<ans.length();i++){
            chars.push_back(ans[i]);
        }
        return ans.length();
    }
};
