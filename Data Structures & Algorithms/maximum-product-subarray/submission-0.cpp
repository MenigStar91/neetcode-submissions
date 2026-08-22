class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPos = nums[0];
        int maxNeg = nums[0];

        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxNeg, maxPos);
            }

            maxNeg = min(nums[i], maxNeg*nums[i]);
            maxPos = max(nums[i], maxPos*nums[i]);

            ans = max(ans, maxPos);
        }
        return ans;
    }
};
