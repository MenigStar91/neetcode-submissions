class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
 
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i-1]==nums[i]) continue;

            int target = nums[i];
            int left = i+1, right = nums.size()-1;
            while(left<right){

                if(nums[left]+nums[right]+target==0){
                    ans.push_back({target, nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1])
    left++;
                    while (left < right && nums[right] == nums[right + 1])
    right--;
                }else if (nums[left]+nums[right]+target<0){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return ans;
    }
};
