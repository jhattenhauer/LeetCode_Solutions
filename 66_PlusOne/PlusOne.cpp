class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int digit_count = digits.size();
        int indecie = digit_count - 1;
        for (int i = indecie; i >= 0; i--){
            if (digits[i] == 9){
                digits[i] = 0;
            } else {
                digits[i] += 1;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};