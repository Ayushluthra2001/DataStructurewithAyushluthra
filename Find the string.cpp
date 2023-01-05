class Solution {
  public:
    int isItPossilbe(string s) {
        // code here
        int n=s.length()-1;
        int st=0;
        int mid=(st+n)/2;
        
        string temp1="",temp2="";
        for(int i=0;i<=mid;i++){
            temp1+=s[i];
        }
        for(int i=mid+1;i<s.length();i++){
            temp2+=s[i];
        }
        
        
       
        if(temp1.length()!=temp2.length()) return 0;
        if(mid==0) {
            return temp1[0]==temp2[0];
        }
        n=mid+1;
        for(int i=0;i<=mid;i++){
           
            char ch1,ch2;
            ch1=temp1[(i-1+n)%n];
            ch2=temp2[(i-1+n)%n];
            
            if(ch1!=ch2) return 0;
        }
        return 1;
        
    }
};
