class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n,true));

        int start = 0;
        int maxLen = 1;
        // len of each possible substring
        for(int len=2;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j = i + len - 1;
                if((s[i]==s[j]) && (dp[i+1][j-1]==true)){     
                    // no need to check max cause len is always inc
                    if(len>maxLen){
                        start = i;
                        maxLen = len;
                    }
                }else{
                    dp[i][j] = false;
                }
            }
        } // loop

        return s.substr(start,maxLen);
    }
};
