class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for(string s:strs){
            result+=to_string(s.length());
            result+="#";
            result+=s;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> strs;

        int i=0;
        while(i<s.length()){
            int no = 0;
            while(s[i]!='#'){
                no=no*10+(s[i] - '0');
                i++;
            }

            i++; 
            string str = s.substr(i, no);
            strs.push_back(str);
            i+=no;
        }

        return strs;
    }
};
