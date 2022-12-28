class Solution {
public:
    string maxValue(string n, int x) {
        
        if(n[0]!='-'){
           
           int s=0;
           bool find =false;
           int index=-1;
           while(s<n.length()-1){
            if(n[s]-'0'<x) {
                index=s;
                find=true;
                break;
            }
            s++;
           }
            if(find){
                string st;
                for(int i=0;i<index;i++){
                    st+=n[i];
                }
                
                st+=to_string(x);
                for(int i=s;i<n.length();i++){
                    st+=n[i];
                }
                
                return st;

            }else{
                n+=to_string(x);
                return n;
            }
           
        }

        int s=0;
           bool find =false;
           int index=-1;
           while(s<=n.length()-1){
            if(x<n[s]-'0') {
                index=s;
                find=true;
                break;
            }
            s++;
           }
           if(!find){
               n+=to_string(x);
               return n;
           }
           string st;
           for(int i=0;i<index;i++){
               st+=n[i];
           }
           st+=to_string(x);
           for(int i=index;i<n.length();i++){
               st+=n[i];
           }
           
        return st;
    }
};
