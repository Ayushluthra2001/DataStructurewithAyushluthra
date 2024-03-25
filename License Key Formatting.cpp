class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp="";
        int currPointer=0;
        for(int i=s.length()-1;i>=0;i--){
            if(currPointer==k){
                temp+='-';
                currPointer=0;
            }
            if(s[i]!='-') {temp+=toupper(s[i]);currPointer++;}
                
            
            

        }
        if(temp.length()>=1 && temp[temp.size()-1]=='-') temp.pop_back();
        reverse(temp.begin(),temp.end());

        return temp;
    }
};
