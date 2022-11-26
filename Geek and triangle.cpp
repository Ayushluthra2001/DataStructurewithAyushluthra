bool triangle(int a, int b, int c)
    {
        //your code here 
        if(a+b>c && b+c>a && c+a>b) return true;
        return false;
    }
