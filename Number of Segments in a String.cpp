class Solution {
public:
    int countSegments(string s) {
        int count=0;
        int i=0;
        
        while(i<s.length()){
            int j=i;
            bool find=false;
            while(j<s.length() && s[j]!=' ') {
                find=true;
                j++;
            }
            while(j<s.length() && s[j]==' ') j++;
            if(find)count++;
            i=j;
        }
        //if(s.length()!=0 && s[s.length()-1]!=' ') count++;
        return count;
    }
};
