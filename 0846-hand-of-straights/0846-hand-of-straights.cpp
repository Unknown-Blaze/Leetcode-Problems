class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        if (hand.size() % groupSize != 0) return false;

        map<int, int> cardCount;
        for (int card : hand) {
            cardCount[card]++;
        }

        for (auto kv = cardCount.begin(); kv != cardCount.end(); ++kv) {
            int start = kv->first;
            while (cardCount[start] > 0) {
                for (int i = 0; i < groupSize; ++i) {
                    if (cardCount[start + i] > 0) {
                        cardCount[start + i]--;
                    } else {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};