class Solution{   
public:
    int validString(int N, string st){
    // Write your code here.
    stack<char>s;
    s.push(st[0]);
    for(int i=1;i<st.length();i++){
        if(s.top()-'a'>st[i]-'a') return 0;
        else {
            while(!s.empty() && s.top()-'a'<=st[i]-'a') s.pop();
            s.push(st[i]);
        }
    
        
      }
      return 1;
    }
};
