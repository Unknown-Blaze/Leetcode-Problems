class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (map.count(val)){
            return false;
        }
        map[val] = 1;
        list.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (!map.count(val)){
            return false;
        }
        map.erase(val);
        erase(list, val);
        return true;
    }
    
    int getRandom() {
        return list[rand() % list.size()];
    }
private:
    vector<int> list;
    unordered_map<int, int> map;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */