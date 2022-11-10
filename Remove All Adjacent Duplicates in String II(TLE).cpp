class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()) st.push(s[i]);
            else if(!st.empty() && st.top()==s[i]){
                
                int count=1;
                while(!st.empty() && count<=k && st.top()==s[i]){
                    count++;
                    st.pop();
                }
                if(count!=k){
                    while(count){
                        st.push(s[i]);
                        count--;
                    }
                }
            }else {
                
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            
            ans=st.top()+ans;
            st.pop();
        }
       
        return ans;
    }
};
