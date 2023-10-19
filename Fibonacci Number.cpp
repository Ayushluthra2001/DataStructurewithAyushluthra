class Solution {
public:
    int fib(int n) {
      int a=0;
      int b=1;
      if(n==1 || n==0) return n;
      int c;
      for(int i=2;i<=n;i++){
          c=a+b;
          a=b;
          b=c;

      }  
      return c;
    }
};
