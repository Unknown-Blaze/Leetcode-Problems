class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;

        for (int j = 0; j < tickets.size(); j++){
            if (j <= k){
                if (tickets[j] <= tickets[k]) {
                    time += tickets[j];
                }else{
                    time += tickets[k];
                }
            }else{
                if (tickets[j] < tickets[k]){
                    time += tickets[j];
                }else{
                    time += tickets[k]-1;
                }
            }   
        }

        return time;
        
    }
};