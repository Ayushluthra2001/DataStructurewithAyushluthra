class Solution {
public:
    int myAtoi(string str) {
        if(str.length()==0) return 0;
        long  result=0;
        int sign=+1;
        int i=0;
        while(i<str.length() && str[i]==' ') i++;
        str=str.substr(i);
        if(str[0]=='-') sign=-1;
        int max=INT_MAX,mini=INT_MIN;
        i = (str[0]=='+' || str[0]=='-') ? 1:0;
        while(i<str.length()){
            if(str[0]==' ' || !isdigit(str[i])) break;
            result=result*10+str[i]-'0';
            if(sign==-1 && -1*result<mini) return mini;
            if(sign==1 && result>max) return max;
            i++;
        }
        return (int)(sign*result);
    }
};
