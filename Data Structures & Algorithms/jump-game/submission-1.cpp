class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int pivot = nums[0];
  
        int i = 1;
        while(i<n && pivot<n){ 

            if(i>pivot) return false;

            if(pivot<i+nums[i]){
                pivot = i+nums[i];
            }
            i++;
        }
        return true;
    }
};
