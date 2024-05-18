class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Time: O(n), Space O(n)
        // unordered_map<int, int> map;

        // for (int i = 0; i < nums.size(); i++){
        //     map[nums[i]]++;
        //     if (map[nums[i]] > nums.size()/2) return nums[i];
        // }
        // return 0;

        // Time: O(n), Space O(1)
        int counter = 0;
        int maj = nums[0];

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == maj) counter++;
            else counter--;
            if (counter == 0) maj = nums[i+1];
        }
        return maj;
                

    }
};