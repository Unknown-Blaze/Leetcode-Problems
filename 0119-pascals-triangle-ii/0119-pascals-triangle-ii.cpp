class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret;
        for (int i = 0; i < rowIndex; i++){
            ret.push_back(choose(rowIndex, i));
        }
        ret.push_back(1);
        return ret;
    }
    
    long long choose(int n, int r){
        long long sum = 1;
        for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
        return sum;
    }
};