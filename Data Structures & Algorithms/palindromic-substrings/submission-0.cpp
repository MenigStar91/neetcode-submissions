class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n,true));

        int count = s.length();
        // len of each possible substring
        for(int l=2;l<=n;l++){
            for(int i=0;i<=n-l;i++){
                if((s[i]==s[i+l-1]) && (dp[i+1][i+l-2]==true)){     
                    count++;
                }else{
                    dp[i][i+l-1] = false;
                }
            }
        } // loop

        return count;
    }
};
