class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffix(n,1);

        int pre = 1, suf = 1;
        for(int i=n-1;i>=0;i--){
            suffix[i] = suf;
            suf *= nums[i];
        }

        vector<int> result(n,1);
        for(int i=0;i<n;i++){
            result[i] = pre * suffix[i];
            pre *= nums[i];
        }
        
        return result;
    }
};
