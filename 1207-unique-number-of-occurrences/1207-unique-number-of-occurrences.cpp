class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        set<int> set;

        for (int i = 0; i < arr.size(); i++){
            map[arr[i]]++;
        }
        
        for (auto [key, value] : map){
            set.insert(value);
        }
        if (set.size() == map.size()){
            return true;
        }
        return false;
    }
};