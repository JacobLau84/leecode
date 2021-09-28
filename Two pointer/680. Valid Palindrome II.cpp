class Solution {
public:
    bool verify(string s, int left, int right, bool deleted){
        while (left < right){
            if (s[left] != s[right]){
                if (deleted)
                    return false;
                else{
                    return verify(s, left + 1, right, true) || verify(s, left, right - 1, true);
                }
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        return verify(s, 0, size(s) - 1, false);
    }
};