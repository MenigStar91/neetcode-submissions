class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int sz = temperatures.size();
        vector<int> res(sz,0);
        for(int i=0;i<sz;i++){
            if(!st.empty()){
                while(!st.empty() && st.top().first<temperatures[i]){
                    res[st.top().second] = i - st.top().second;
                    st.pop();
                }
            }
            st.push({temperatures[i], i});
        }

        // while(!st.empty()){
        //     res[st.top().second] = sz - st.top().second;
        //     st.pop();
        // }
        return res;
    }
};
