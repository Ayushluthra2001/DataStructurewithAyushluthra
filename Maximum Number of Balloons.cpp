class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string temp="balloon";
        vector<int>temp3(26,0);
        for(int i=0;i<temp.length();i++){
            temp3[temp[i]-'a']++;
        }
        int mini2=0;
        vector<int>temp2(26,0);
        int mini=INT_MAX;
        for(int i=0;i<text.size();i++){
            temp2[text[i]-'a']++;
        }
        for(int i=0;i<temp.length();i++){
           if(temp2[temp[i]-'a']==0) return 0;
           else {
               mini=min(mini,temp2[temp[i]-'a']/temp3[temp[i]-'a']);
           }
        }
        return mini;
    }
};
