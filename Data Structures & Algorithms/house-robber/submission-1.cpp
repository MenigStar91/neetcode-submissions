class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1);
        int x = 0;
        int y = nums[0];
        for(int i=1;i<n;i++){
            int t = max(x+nums[i], y);
            x = y;
            y = t;
        }
        return y;
    }
};
