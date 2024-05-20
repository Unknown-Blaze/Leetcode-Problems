class Solution {
public:

    string numToLetters(char digit) {
        if (digit == '2') return "abc";
        else if (digit == '3') return "def";
        else if (digit == '4') return "ghi";
        else if (digit == '5') return "jkl";
        else if (digit == '6') return "mno";
        else if (digit == '7') return "pqrs";
        else if (digit == '8') return "tuv";
        else if (digit == '9') return "wxyz";
        else return "";
    }

    void backtrack(vector<string>& ans, string digits, int index, string curr){
        if (index == digits.size()) {
            ans.push_back(curr);
            return;
        }

        string chars = numToLetters(digits[index]);
        for (int j = 0; j < chars.size(); j++){
            backtrack(ans, digits, index+1, curr+chars[j]);
        }
        
        return;
    }

    vector<string> letterCombinations(string digits) {
        if (digits == "") return {};
        vector<string> ans;
        backtrack(ans, digits, 0, "");
        return ans;
    }
};