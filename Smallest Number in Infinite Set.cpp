class SmallestInfiniteSet {
     vector<int>temp;
    int i = 0;
public:

    
 
    SmallestInfiniteSet() {
        
        temp.resize(1000,1);
    }
    
    int popSmallest() {
        int ans = -1;
        for(int i = 0; i <1000;i++){
            if(temp[i]!=-1) {
                ans= i +1;
                temp[i] = -1;
                return ans;
            }
        }
        
        return -1;
        
    }
    
    void addBack(int num) {
        temp[num-1] = 1;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
