class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        int mini=min(a.length(),b.length());
        char carry='0';
        string ans="";
        int i;
        for(i=0;i<mini;i++){
            if(a[i]=='1' && b[i]=='1'){
                if(carry=='1'){
                    ans+='1';
                    carry='1';
                }else{
                    ans+='0';
                    carry='1';
                }
            }else if(a[i]=='1' && b[i]=='0'){ 
                if(carry=='1'){
                    ans+='0';
                    carry='1';
                }else{
                    ans+='1';
                    carry='0';
                }
            }else if(a[i]=='0' && b[i]=='1'){ 
                if(carry=='1'){
                    ans+='0';
                    carry='1';
                }else{
                    ans+='1';
                    carry='0';
                }
            }else{ 
                if(carry=='1'){
                    ans+='1';
                    carry='0';
                }else{
                    ans+='0';
                    carry='0';
                }
            }
        }
        // left string of a if b length is minimum
        while(i<a.length()){
            if(a[i]=='1'){
                if(carry=='1'){
                    ans+='0';
                    carry='1';
                }else{
                    ans+='1';
                    carry='0';
                }
            }else{
                if(carry=='1'){
                    ans+='1';
                    carry='0';
                }else{
                    ans+='0';
                    carry='0';
                }
            }
            i++;
        }
        // left string of b if a is minimum
        while(i<b.length()){
             if(b[i]=='1'){
                if(carry=='1'){
                    ans+='0';
                    carry='1';
                }else{
                    ans+='1';
                    carry='0';
                }
            }else{
                if(carry=='1'){
                    ans+='1';
                    carry='0';
                }else{
                    ans+='0';
                    carry='0';
                }
            }
            i++;
        }
        
        // Handling of carry if at last carry is reaming 
        if(carry=='1') ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
