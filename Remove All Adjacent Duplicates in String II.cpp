class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        if(n<k) return s;
        stack<pair<char,int>>st;
        for(int i=0;i<s.length();i++){
            
            if(st.empty()) st.push({s[i],1});
            else if(!st.empty()){
                auto it = st.top();
                if(it.first==s[i] && it.second==k-1){
                    st.pop();
                }
                else if(it.first!=s[i]){
                    st.push({s[i],1});
                }
                else{
                    st.pop();
                    
                    st.push({it.first,it.second+1});
                }
            }
        }
        string ans="";
        while(!st.empty()){
            auto it =st.top();
            st.pop();
            string temp="";
            for(int i=0;i<it.second;i++){
               temp=it.first+temp;
            }
            ans=temp+ans;
        }
        
        return ans;
    }
};
// else if(it.first==s[i] && it.second!=k-1){
                    
//                 }
/*

*/
