class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mpS(26,0), mpT(26,0);
        
        for(auto c:s){
            mpS[c-'a']++;
        }
        for(auto c:t){
            mpT[c-'a']++;
        }

        bool flag = true;
        for(int i=0;i<26;i++){
            if(mpS[i]!=mpT[i]){
                flag = false;
            }
        }

        return flag;
    }
};
