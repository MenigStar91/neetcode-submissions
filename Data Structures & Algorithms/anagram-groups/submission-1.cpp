class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map< vector<int>, vector<string>> groups;
      for(string s:strs){
        vector<int> mp(26,0);

        for(auto i:s){
            mp[i-'a']++;
        }
        groups[mp].push_back(s);
      }  

      vector<vector<string>> ans;
      for(auto [key,value] : groups){
        ans.push_back(value);
      }

      return ans;
    }
};
