class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        string firstRow="qwertyuiop";
        string secondRow="asdfghjkl";
        string thirdRow="zxcvbnm";
        int len=firstRow.length();
        for(int i=0;i<len;i++){
            firstRow+=toupper(firstRow[i]);
        }
        len=secondRow.length();
        for(int i=0;i<len;i++){
            secondRow+=toupper(secondRow[i]);
        }
        len=thirdRow.length();
        for(int i=0;i<len;i++){
            thirdRow+=toupper(thirdRow[i]);
        }
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            string temp2;
            string temp=words[i];
            // cout<<temp[0]<<endl;
            if(find(firstRow.begin(),firstRow.end(),temp[0]) !=firstRow.end()) temp2=firstRow;
             if(find(secondRow.begin(),secondRow.end(),temp[0]) !=secondRow.end())temp2=secondRow;
              if(find(thirdRow.begin(),thirdRow.end(),temp[0]) !=thirdRow.end())temp2=thirdRow;
              bool check=true;
              for(int j=0;j<temp.length() && check;j++){
                  if(find(temp2.begin(),temp2.end(),temp[j])==temp2.end()) check=false;
              }
              if(check){
                  ans.push_back(temp);
              }
            

        }
        
         
        return ans;
    }
};
