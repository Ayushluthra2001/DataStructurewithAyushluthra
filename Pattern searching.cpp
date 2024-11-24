bool searchPattern(string str, string pat) {
    // your code here
   
    for(int i = 0; i<str.length();i++){
    
        if(pat[0] == str[i]){
            int j = 0 , k = i;
            while(j < pat.length() && k < str.length()  && pat[j] == str[k])j++, k++;
            if(j == pat.length()) return true;
            
        }
      
        
    }
    return false;
}
