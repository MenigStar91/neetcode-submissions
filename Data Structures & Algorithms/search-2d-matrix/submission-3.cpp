class Solution {
public:

    int n,m;

    pair<int,int> box(int x){
        return {x/m, x - (x/m*m)};
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        n = matrix.size();
        m = matrix[0].size();

        int low = 0;
        int high = n*m-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            pair<int,int> pos = box(mid);

            int val = matrix[pos.first][pos.second];

            if(val==target) return true;
            
            if(val<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return false;
    }
};
