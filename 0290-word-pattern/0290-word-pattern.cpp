class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s += " ";
        unordered_map<string, char> sc;
        unordered_map<char, string> cs;
        int l = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' '){
                string word = s.substr(l, i-l);
                if(sc.find(word) == sc.end()){
                    if (cs.find(pattern[count]) != cs.end()) {
                        return false;
                    }
                    sc[word] = pattern[count];
                    cs[pattern[count]] = word;
                }else{
                    if (sc[word] != pattern[count] || cs[pattern[count]] != word) return false;
                }
                l = i+1;
                count++;
            }
        }
        if (count == pattern.size())
            return true;
        return false;
    }
};