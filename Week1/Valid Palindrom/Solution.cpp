class Solution {
    bool check(const string& str, int i, int j) {
        while (i < j) {
            if (str[i++] != str[j--]) {
                return false;
            }
        }
        return true;
    }
public:
    bool validPalindrome(string str) {
        int i = 0, j = str.size() - 1;
        while (i < j) {
            if (str[i] == str[j]) { 
                j--; 
                i++; 
            }
            else {
                return check(str, i + 1, j) || check(str, i, j - 1);
            }
        }
        return true;
    }
};
