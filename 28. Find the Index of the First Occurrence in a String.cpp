class Solution {
public:
    int strStr(string &haystack, string &needle) {
        int i = 0;
        int j = 0;
        int ans = -1;
        while(i < haystack.size() && j < needle.size()) {
            if(haystack[i] != needle[j]) {
                i = i - j + 1;
                j = 0; 
                ans = -1; 
            }
            else {
                if(ans == -1) {
                    ans = i; 
                }
                j++;
                i++;
            }
        }
        if (j == needle.size()) { 
            return ans;
        }
        return -1;
    }
};
