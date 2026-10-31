class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // o(n) means no sorting
        // if use hashing :: count sort??
        // create set :: parent -> starting element
        // if (n-1) && (n+1) -> diff sets : join, else :: insert

        unordered_set<int> mp;
        for(int i:nums){
            mp.insert(i);
        }

        int ans = 0;
        for(int i:mp){
            if(mp.count(i-1)) continue;

            int len = 0;
            int elem = i;
            while(mp.count(elem)){
                len++;
                elem++;
            }

            ans = max(ans, len);
        }
        return ans;
    }
};
