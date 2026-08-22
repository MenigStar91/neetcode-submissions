class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int x = 0;
        int y = 0;
        for(int i=2;i<=n;i++){
            int temp = min(cost[i-2]+x, cost[i-1]+y);
            x = y;
            y = temp;
        }
        return y;
    }
};


// 1 2 1 2 1 1 1 
// 1 2 2 4 3 4 4 

