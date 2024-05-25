class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> set{brokenLetters.begin(), brokenLetters.end()};
        int flag = 1;
        int ret = 0;
        for (int i = 0; i < text.size(); i++){
            if (set.count(text[i])) flag = 0;
            if (text[i] == ' '){
                ret += flag;
                flag = 1;
            }
        }
        return ret + flag;
    }
};