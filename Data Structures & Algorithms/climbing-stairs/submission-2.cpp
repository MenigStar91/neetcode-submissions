class Solution {
public:

    int climbStairs(int n) {
        int x = 1; int y = 1;
        for(int i=0;i<n;i++){
            int t = x+y;
            x = y;
            y = t;
        }
        return x;
    }
};
