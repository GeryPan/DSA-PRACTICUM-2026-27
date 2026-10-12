class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int add = 1;

        for (int i = n - 1; i >= 0 && add; i--) {
            int sum = digits[i] + add;
            add = sum / 10;
            digits[i] = sum % 10;                      
        }

        if (add) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
