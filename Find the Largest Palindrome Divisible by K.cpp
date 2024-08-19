class Solution {
public:
    string largestPalindrome(int n, int k) {
        if(k==1){
            string ans="";
            for(int i=0;i<n;i++){
                ans+="9";
            }
            return ans;
        }
        else if(k==2){
            string ans="8";
            if(n==1)return ans;
            int i=0;
            while(i<n-2){
                ans="9"+ans;
                i++;
            }
            ans="8"+ans;
            return ans;
        }
        else if(k==3){
            string ans="";
            for(int i=0;i<n;i++){
                ans+="9";
            }
            return ans;
        }
        else if(k==4){
            if(n==1)return "8";
            string ans = "";
			for (int i = 0; i < n; ++i) {
				if (i < 2 || i > n - 3) ans += '8';
				else ans += '9';
			}
			return ans;
        }
        else if(k==5){
            if(n==1)return "5";
            string ans = "5";
			for (int i = 0; i < n - 2; ++i) ans += '9';
			if (n > 1) ans += "5";
			return ans;
        }
        else if (k == 6) {
            if(n==1)return "6";
			if (n == 2) return "66";
			if (n == 3) return "888";
			if (n == 4) return "8778";
			string ans = "";
			if (n % 2) {
				for (int i = 0; i < n; ++i) {
					if (i == 0 || i == n - 1) ans += '8';
					else if (i == n / 2) ans += '8';
					else ans += '9';
				}
			}
			else {
				for (int i = 0; i < n; i++) {
					if (i == 0 || i == n - 1) ans += '8';
					else if (i == n / 2 - 1 || i == n / 2) ans += '7';
					else ans += '9';
				}
			}
			return ans;
		}
        else if(k==7){
            string ans = "";
			if (n % 2 == 0) {
				if (n == 2) return "77";
				for (int i = 0; i < n; i++) {
					if (i == n / 2 || i == n / 2 - 1) {
						if (n / 2 % 6 == 0 || n / 2 % 6 == 3) ans += '9';
						else if (n / 2 % 6 == 1 || n / 2 % 6 == 2) ans += '7';
						else ans += '4';
					} else ans += '9';
				}
			}
			else {
				if (n == 1) return "7";
				for (int i = 0; i < n; i++) {
					if (i == n / 2) {
						if (n / 2 % 6 == 0) ans += '7';
						else if (n / 2 % 6 == 1) ans += '5';
						else if (n / 2 % 6 == 2) ans += '7';
						else if (n / 2 % 6 == 3) ans += '4';
						else if (n / 2 % 6 == 4) ans += '6';
						else ans += '4';
					}
					else ans += '9';
				}
			}
			return ans;
        }
        else if (k==8){
            if(n==1)return "8";
            string ans = "";
			for (int i = 0; i < n; ++i) {
				if (i <= 2 || i >= n - 3) ans += '8';
				else ans += '9';
			}
			return ans;
        }
        else if(k==9){
            string ans="";
            for(int i=0;i<n;i++){
                ans+="9";
            }
            return ans;
        }
        return "";
    }
};
