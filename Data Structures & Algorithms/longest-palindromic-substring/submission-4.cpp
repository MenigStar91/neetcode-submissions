class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n,true));

        int start = 0;
        int maxLen = 1;
        // len of each possible substring
        for(int l=2;l<=n;l++){
            for(int i=0;i<=n-l;i++){
                if((s[i]==s[i+l-1]) && (dp[i+1][i+l-2]==true)){     
                    start = i;
                    maxLen = l;
                }else{
                    dp[i][i+l-1] = false;
                }
            }
        } // loop

        return s.substr(start,maxLen);
    }
};
