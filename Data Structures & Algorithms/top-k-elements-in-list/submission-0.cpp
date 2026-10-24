class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i:nums){
            freq[i]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for(auto [key, value] : freq){
            bucket[value].push_back(key);
        }

        vector<int> ans(k);
        int i=0;
        for(int x=nums.size();x>=0;x--){
            for(auto it:bucket[x]){
                if(i==k)break;

                ans[i]=it;
                i++;    
            }
        }

        return ans;    
    }
};
