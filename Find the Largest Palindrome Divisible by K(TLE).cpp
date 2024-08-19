class Solution {
public:
bool palindrome(string &s){
    int start = 0;
    int end   = s.length()-1;

    while(start <= end){
        if( s[start] != s[end]) return false;
        start++,end--;
    }
    return true;
}
 int sum(string &curr){
    int sum = 0;
    int i = 0;
    while(i < curr.length()){
        sum += curr[i] - '0';
        i++;
    }
    return sum;
 }
 bool isDivisibleBy7(string& s) {
        int remainder = 0;
        for (char c : s) {
            remainder = (remainder * 10 + (c - '0')) % 7;
        }
        return remainder == 0;
    }
    string largestPalindrome(int n, int k) {


        string smallestNumber = "1";
        string largestNumber  = "9";
        for(int i = 1; i < n; i++){
            smallestNumber+='0';
            largestNumber +='9';
        }
        
        if(k==1) return largestNumber;
        int maxNumber = stoi(largestNumber);
        int minNumber = stoi(smallestNumber);

        

        while( maxNumber >= minNumber){
            string curr = to_string(maxNumber);
            if(k==2){
                int lastDigit = curr[curr.length()-1]-'0';
                if(lastDigit % 2== 0 && palindrome(curr)) return curr;
            }else if(k==3){

                int getSum = sum(curr);
                if(getSum % 3 == 0 && palindrome(curr)) return curr;

            }else if(k==4){

                    int  last2Digit=0;
                    if(curr.length()>=2)
                    last2Digit = stoi(curr.substr(curr.length()-2,curr.length()));
                    else last2Digit = stoi(curr);
                   
                   if(last2Digit % 4==0 && palindrome(curr)) return curr;


            }else if(k==5){
                 int lastDigit = curr[curr.length()-1]-'0';
                if(lastDigit % 5== 0 && palindrome(curr)) return curr;
            }else if(k==6){
               bool flag = true;
                int lastDigit = curr[curr.length()-1]-'0';
                if(lastDigit % 2== 0 && palindrome(curr)) ;
                else flag = false;
               
                int getSum = sum(curr);
                if(getSum % 3 == 0 && palindrome(curr)) ;
                else flag =  false;

               if(flag)  return curr;
                
            }else if(k==7){
                if(isDivisibleBy7(curr) && palindrome(curr)) return curr;
            }else if(k==8){
                 int  last3Digit=0;
                if(curr.length()>=3)
                last3Digit = stoi(curr.substr(curr.length()-3,curr.length()));
                else last3Digit = stoi(curr);
                   
                if(last3Digit % 8==0 && palindrome(curr)) return curr;
                    
            }else if(k==9){
                int getSum = sum(curr);
                if(getSum % 9 == 0 && palindrome(curr)) return curr;
            }

            maxNumber--;
        }
          
        return "";
    }
};
