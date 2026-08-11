class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        int n = s.length();
        while(left<right){
            while(left<n && !isalnum(s[left])){
                left++;
            }
            while(right>=0 && !isalnum(s[right])){
                right--;
            }

            // if(left>=n || right<0) return false;
            if(tolower(s[left])!=tolower(s[right])) return false;
            else{
                left++;
                right--;
            }
        }

        return true;
    }
};
