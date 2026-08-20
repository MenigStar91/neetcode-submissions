class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int pos = 0;
        int nextPos = 0;
        while(true){
            pos = nums[pos];
            nextPos = nums[nums[nextPos]];
            if(pos == nextPos) break;
        }

        pos = 0;
        while (pos != nextPos) {
            pos = nums[pos];
            nextPos = nums[nextPos];
        }

        return pos;
    }
};

