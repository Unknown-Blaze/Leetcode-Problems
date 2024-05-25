class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> remaining(capacity.size());
        for (int i = 0; i < capacity.size(); i++){
            remaining[i] = capacity[i] - rocks[i];
        }
        sort(remaining.begin(), remaining.end());
        int ret = 0;
        for (int i = 0; i < remaining.size(); i++){
            if (remaining[i] == 0) ret++;
            else if (remaining[i] <= additionalRocks) {
                additionalRocks -= remaining[i];
                ret++;
            }
        }
        return ret;
    }
};