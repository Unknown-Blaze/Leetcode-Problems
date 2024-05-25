class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max = 0;
        unordered_map<int, int> map;

        for (int i = 0; i < rectangles.size(); i++){
            int min = rectangles[i][0] < rectangles[i][1] ? rectangles[i][0] : rectangles[i][1];
            map[min]++;
        }
        for (auto val : map){
            if (val.first > max) max = val.first;
        }
        return map[max];
    }
};