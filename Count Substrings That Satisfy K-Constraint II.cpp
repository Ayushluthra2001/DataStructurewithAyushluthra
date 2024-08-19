class Solution {
public:
    vector<long long> countKConstraintSubstrings(string s, int k, vector<vector<int>>& queries) {
        vector<long long>result;

        int  n = s.length();
        vector<int> leftMost(n,0);
        vector<int> rightMost(n,0);

        int i = 0;
        int j = 0;

        unordered_map<char,int>mapping;

        while(j<n){
            mapping[s[j]]++;

            while(mapping['0'] > k && mapping['1'] > k){
                mapping[s[i]]--;
                i++;

            }

            leftMost[j] = i;

            j++;
        }

        mapping.clear();

        i = n-1;
        j = n-1;
        while( j>= 0){
            mapping[s[j]]++;

            while(mapping['0'] > k  && mapping['1'] > k) {
                mapping[s[i]]--;
                i--;
            } 
            rightMost[j] = i;
            j--;

        }

        vector<int>temp(n,0);
        for(int j = 0; j < n; j++){
            temp[j] = j - leftMost[j] + 1;


        }
        vector<long long >cumSum(n,0);
         
        cumSum[0] = temp[0];
        for(int i = 1; i < n; i++){
            cumSum[i] = cumSum[i-1] + temp[i]; 
        }


        for(vector<int>& query : queries){
            int low = query[0];
            int high = query[1];

            int valid = min(high,rightMost[low]);


            long long length = valid - low + 1;
            long long total = length * (length +1 ) /2;

            total += cumSum[high] - cumSum[valid];
            result.push_back(total);

        }
        return result ;
    }
};
