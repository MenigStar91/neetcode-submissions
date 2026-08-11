class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map <string, vector<string>> groups;
      for(string i:strs){
        string s = i;
        sort(s.begin(), s.end());
        groups[s].push_back(i);
      }  

      vector<vector<string>> ans;
      for(auto [key,value] : groups){
        ans.push_back(value);
      }

      return ans;
    }
};
