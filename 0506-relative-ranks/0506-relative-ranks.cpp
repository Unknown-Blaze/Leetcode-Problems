class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        unordered_map<int, int> map;
        vector<string> ret(score.size());
        for (int i = 0; i < score.size(); i++){
            map[score[i]] = i;
        }

        sort(score.begin(), score.end(), greater<int>());

        for (int i = 0; i < score.size(); i++){
            int pos = map[score[i]];
            if (i <= 2){
                if (i == 0){
                    ret[pos] = "Gold Medal";
                }else if (i == 1){
                    ret[pos] = "Silver Medal";
                }else if (i == 2){
                    ret[pos] = "Bronze Medal";
                }
            }else{
                ret[pos] = to_string(i+1);
            }
        }
        return ret;
    }
};