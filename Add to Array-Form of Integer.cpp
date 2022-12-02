class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string array="";
        
        // converting num array to string
        for(int i=0;i<num.size();i++){
            array+=num[i]+'0';
        }
        
        // converting k to string
        string kk=to_string(k);
        string ans="";
        int carry=0;
        int j=kk.length()-1;
        int i=array.length()-1;
        
        // starting from the end doing additon operation 
        while(carry || j>=0 || i>=0){
            int ival=i>=0 ? array[i]-'0' : 0;
            int jval=j>=0 ? kk[j]-'0' : 0 ;
            int sum = ival+jval+carry;
            ans+=to_string(sum%10);
            carry=sum/10;
            i--;
            j--;
        }
        // as we are starting from the end resultant string need to be reversed 
        reverse(ans.begin(),ans.end());
        vector<int>num2;
        
        // converting string to integer
        for(int i=0;i<ans.length();i++){
            num2.push_back(ans[i]-'0');
        }
        
        return num2;
    }
};
