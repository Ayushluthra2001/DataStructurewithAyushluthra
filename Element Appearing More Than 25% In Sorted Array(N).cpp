class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mapping;
        for(auto i : arr){
            mapping[i]++;
        }
        int per=((arr.size()*25)/100);
        for(auto i : mapping){
            if(i.second>per) return i.first;
        }
        return -1;
    }
};
