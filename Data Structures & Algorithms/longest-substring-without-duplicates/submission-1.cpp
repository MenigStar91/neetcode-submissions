class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;  // easier access using vertor

        int currLen = 0;
        int maxLen = 0;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])==0 || i-mp[s[i]]>currLen){
                currLen++;
                mp[s[i]] = i;
            }else{
                currLen = i - mp[s[i]];
                mp[s[i]] = i;
            }
            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};
