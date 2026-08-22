class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int x = cost[0];
        int y = cost[1];
        for(int i=2;i<n;i++){
            int temp = cost[i] + min(x, y);
            x = y;
            y = temp;
        }
        return min(x, y);
    }
};


// 1 2 1 2 1 1 1 
// 1 2 2 4 3 4 4 

