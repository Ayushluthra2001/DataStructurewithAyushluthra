class Solution {
public:
    int nextGreaterElement(int n) {
        
        string m=to_string(n);
        int i=m.length()-2;
        while(i>=0 && m[i]>=m[i+1]) i--;
        if(i==-1) return -1;
        int k=m.length()-1;
        while(m[i]>=m[k]) k--;
        swap(m[i],m[k]);
        // cout<<m<<endl;
        string temp="";
        string temp2="";
        for(int j=0;j<=i;j++){
            temp+=m[j];
        }
        for(int j=m.length()-1;j>i;j--){
            temp2+=m[j];
        }
        // cout<<temp<<endl;
        // cout<<temp2<<endl;
        string res=temp+temp2;
        long result=0;
        for(int i=0;i<res.length();i++){
            result=result*10+res[i]-'0';
            if(result>INT_MAX) return -1;
        }
        return (int)result;
    }
};
