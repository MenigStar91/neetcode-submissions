class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n,true));

        int count = s.length();
        // len of each possible substring
        for(int len=2;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j = i + len - 1;
                if((s[i]==s[j]) && (dp[i+1][j-1]==true)){     
                    count++;
                }else{
                    dp[i][j] = false;
                }
            }
        } // loop

        return count;
    }
};
