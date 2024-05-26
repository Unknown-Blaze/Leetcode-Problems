class Solution {
public:
    bool judgeCircle(string moves) {
        int pos[] = {0, 0};
        for (int i = 0; i < moves.size(); i++){
            if (moves[i] == 'U') pos[0]++;
            else if (moves[i] == 'D') pos[0]--;
            else if (moves[i] == 'L') pos[1]++;
            else pos[1]--;
        }
        return (pos[0] == 0) && (pos[1] == 0);

    }
};