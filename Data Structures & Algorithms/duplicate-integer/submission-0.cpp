class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> elem;
        for(int i:nums){
            if(elem.find(i)!=elem.end()){
                return true;
            }else{
                elem.insert(i);
            }
        }
        return false;
    }
};