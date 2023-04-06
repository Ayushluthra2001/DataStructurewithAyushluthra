class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0;
        int j=0;
        while(i<name.length() && j<typed.length()){
            int k=i+1;
            int l=j+1;
            char ch=name[i];
            char ch2=typed[j];
            int count=1,count2=1;
            // cout<<name[i]<<" "<<typed[j]<<endl;
             if(ch!=ch2) return false;
            while(k<name.length() && name[i]==name[k]){
                k++;
                count++;
            }
            while(l<typed.length() && typed[j]==typed[l]){
                l++;
                count2++;
            }
            if(count>count2) return false;
            i=k;
            j=l;
            
        }
        if(i==name.length() && j==typed.length())
        return true;
        return false;
    }
};
