class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // // x1, y1, x2, y2 for rec1
        // int x1 = rec1[0];
        // int y1 = rec1[1];
        // int x2 = rec1[2];
        // int y2 = rec1[3];
        // // x3, y3, x4, y4 for rec2
        // int x3 = rec2[0];
        // int y3 = rec2[1];
        // int x4 = rec2[2];
        // int y4 = rec2[3];

        if (rec1[2] <= rec2[0] || rec2[2] <= rec1[0]) {
            return false;
        }

        if (rec1[3] <= rec2[1] || rec2[3] <= rec1[1]) {
            return false;
        }
        return true;
    }
};