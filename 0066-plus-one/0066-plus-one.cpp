class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = std::size(digits)-1;
        digits[size]++;

        for (size_t i = size; i >= 0; i--){
            if (i == 0 && digits[i] == 10){
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
            }
            if (digits[i] == 10){
                digits[i] = 0;
                digits[i-1]++;
            }else break;
        }
        return digits;
    }
};