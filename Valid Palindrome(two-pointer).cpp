class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<=end){
            while((!isdigit(s[start]) && !isalpha(s[start])) && start<=end ) start++;
            while((!isdigit(s[end]) &&  !isalpha(s[end])) && start<=end) end--;
            if(start>end) return true;
            char ch=s[start];
            char ch2=s[end];
            if(isdigit(ch) && isdigit(ch2)){
                if(ch!=ch2) return false;
            }
            if(isupper(ch)) ch+=32;
            if(isupper(ch2)) ch2+=32;
            if(ch!=ch2){
               
                return false;
            } 
            start++;
            end--;
            
        }
        return true;
    }
};
