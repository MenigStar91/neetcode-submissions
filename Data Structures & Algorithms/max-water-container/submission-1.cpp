class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;

        int area = 0;
        while(left<right){
            int maxArea = min(heights[left], heights[right])*(right-left);
            area = max(area, maxArea);
            if(heights[left]<heights[right]) left++;
            else right--;
        }

        return area;
    }
};
