class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int max = 0;

        while (l < r){
            int val = (r - l)*min(height[l], height[r]);
            if (val > max) max = val;
            if (height[l] > height[r]) r--;
            else l++;
        }
        return max;
    }
};

