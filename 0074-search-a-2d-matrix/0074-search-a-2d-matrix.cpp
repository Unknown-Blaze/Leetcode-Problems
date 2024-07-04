class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0; 
        int h = m*n;

        while (l < h){
            int mid = (l+h)/2;
            int val = matrix[mid/n][mid%n];

            if (val > target){
                h = mid;
            }else if (val < target){
                l = mid+1;
            }else{
                return true;
            }
            cout << val << endl;
        }
        return false;
    }
};