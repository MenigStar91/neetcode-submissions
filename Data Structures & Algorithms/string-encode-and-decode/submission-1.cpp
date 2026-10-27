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
        cout<<s<<endl;
        while(i<s.length()){
            int no = 0;
            while(s[i]!='#'){
                no=no*10+(s[i] - '0');
                i++;
            }

            cout<<no<<endl;
            string str = "";
            for(int x=1;x<=no;x++){
                str+=s[x+i];
            }
            strs.push_back(str);
            i+=no+1;
        }

        return strs;
    }
};
