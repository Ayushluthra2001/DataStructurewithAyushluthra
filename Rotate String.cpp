class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.length()!=s.length()) return false;
        s+=s;
        for(int i=0;i<goal.length();i++){
            string str=s.substr(i,goal.length());
            if(str==goal) return true;
        }
        return false;
    }
};
