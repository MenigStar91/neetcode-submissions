class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> prefix(n);
        vector<int> suffix(n);

        prefix[0] = height[0];
        suffix[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i] = max(suffix[i+1], height[i]);
        }

        int area = 0;
        for(int i=0;i<n;i++){
            if(i!=0)
                prefix[i] = max(prefix[i-1], height[i]);
            area += min(suffix[i], prefix[i]) - height[i];
        }

        return area;
    }
};
