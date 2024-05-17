#include <algorithm>

class Solution {
public:
    bool closeStrings(string word1, string word2) {

        if (word1.length() != word2.length()) return false;

        unordered_map<char, int> map1, map2;
        unordered_set<char> set1, set2;

        for (int i = 0; i < word1.length(); i++){
            map1[word1[i]]++;
            map2[word2[i]]++;
            set1.insert(word1[i]);
            set2.insert(word2[i]);
        }
        if (set1 != set2) return false;

        vector<int> list1, list2;

        for (auto& [key, value] : map1){
            list1.push_back(value);
        }
        for (auto& [key, value] : map2){
            list2.push_back(value);
        }
        sort(list1.begin(), list1.end());
        sort(list2.begin(), list2.end());

        for (int i = 0; i < list1.size(); i++){
            if (list1[i] != list2[i]) return false;
        }
        return true;
    }
};