class Solution {
public:
    bool isNumber(const std::string& str) {
        if (str.empty()) return false;

        // Determine where the actual digits start
        size_t start_index = 0;
        if (str[0] == '-' || str[0] == '+') {
            start_index = 1;
            // A string containing only "-" or "+" is not a number
            if (str.length() == 1) return false; 
        }

        // Check if the remaining characters are all digits
        return std::all_of(str.begin() + start_index, str.end(), [](unsigned char c) {
            return std::isdigit(c);
        });
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string c:tokens){
            if(isNumber(c)){
                st.push(stoi(c));
            }else{
                if(st.size()<2) return -1;
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();

                if(c=="+") st.push(a+b);
                else if(c=="-") st.push(b-a);
                else if(c=="*") st.push(a*b);
                else if(c=="/") st.push(b/a);
                else{
                    cout<<"Invalid operator";
                }
            }
        }

        return st.top();
    }
};
