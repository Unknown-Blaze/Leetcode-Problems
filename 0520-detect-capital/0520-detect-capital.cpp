class Solution {
public:
    bool detectCapitalUse(string word) {

        if (word.size() == 1) return true;
        int cap_first = 1;
        int cap_second = 1;
        if (word[0] - 'a' < 26 && word[0] - 'a' >= 0){
            cap_first = 0;
        }
        if (word[1] - 'a' < 26 && word[1] - 'a' >= 0){
            cap_second = 0;
        }
        
        if (!cap_first && cap_second) return false;

        for (int i = 2; i < word.size(); i++){
            if (!cap_first){
                if (word[i] - 'A' < 26 && word[i] - 'A' >= 0)
                    return false;
            }else{
                if (cap_second) {
                    if (!((word[i] - 'A') < 26 && (word[i] - 'A') >= 0)) return false;
                }
                else if((word[i] - 'A') < 26 && (word[i] - 'A') >= 0) {
                    return false;
                }
            }
        }

        return true;
    }
};