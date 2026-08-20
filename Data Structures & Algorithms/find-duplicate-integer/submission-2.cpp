class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int pos = nums[0];
        int nextPos = nums[nums[0]];
        while(pos != nextPos){
            pos = nums[pos];
            nextPos = nums[nums[nextPos]];
        }

        pos = 0;

        while (pos != nextPos) {
            pos = nums[pos];
            nextPos = nums[nextPos];
        }

        return pos;
    }
};


// 0 1
// 1 0
// 1 1
// 1 0
// 1 0

// 0 0 1
// 0 1 0
// 0 1 1
// 1 0 0
// 1 0 0
