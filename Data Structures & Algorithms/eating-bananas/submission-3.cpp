class Solution {
public:
    long long calculate(int s, vector<int>&piles){
        long long ans = 0;
        for(auto x:piles){
            ans += ceil(1.0*x/s);
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        long long low = 1;
        long long high = 0;
        for(auto x:piles) high=std::max(high,(long long)x);

        while(low<high){
            // calculate
            long long mid = low + (high-low)/2;
            long long val = calculate(mid, piles);

            if(val<=h){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        return (int)low;
    }
};
