long long minimumTime(int N, int NUM, vector<int> &time) {
        // code here
        long long max_time=*max_element(time.begin(),time.end())*(long long)NUM;
        long long start=0,end=max_time;
        long long mid=start+(end-start)/2;
       
        long long ans=max_time;
        while(start<=end){
            long long count=0;
            for(int i=0;i<N;i++){
                count+=mid/time[i];
                // cout<<mid/time[i]<<" ";
            }
           
            if(count>=NUM){
                ans=min(ans,mid);
                end=mid-1;
            }else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    // 1 10000000
    // 1000
    // 1410065408
    // 10000000000
