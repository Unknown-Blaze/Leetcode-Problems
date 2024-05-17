class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost;

        for (int i = 0; i < matches.size(); i++){
            if (!lost.count(matches[i][0])){
                lost[matches[i][0]] = 0;
            }
            int loser = matches[i][1];
            lost[loser]++;
        }
        vector<int> noloss;
        vector<int> oneloss;
        for (auto [key, value] : lost){
            if (value == 1) oneloss.push_back(key);
            else if (value == 0) noloss.push_back(key);
        }
        sort(noloss.begin(), noloss.end());
        sort(oneloss.begin(), oneloss.end());
        vector<vector<int>> answer;
        return {noloss, oneloss};

    }
};