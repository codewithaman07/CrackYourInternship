class Solution {
public:
    bool checkPalindrome(string s, int l, int h){
        while(l<=h){
            if(s[l] != s[h]){
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0;
        int h = s.length()-1;
        while(l<=h){
            if(s[l] != s[h]){
                return checkPalindrome(s,l+1,h) || checkPalindrome(s,l,h-1);
            }
            else{
                l++;
                h--;
            }
            
        }
        return true;
    }
};
