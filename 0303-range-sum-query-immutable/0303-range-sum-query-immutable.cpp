class NumArray {
public:
    // After solving with the simple method, found a better method:
    NumArray(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum += nums[i];
            cumulative.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        
        return  cumulative[right] - (left ? cumulative[left-1] : 0);
    }
private:
    vector<int> cumulative;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */