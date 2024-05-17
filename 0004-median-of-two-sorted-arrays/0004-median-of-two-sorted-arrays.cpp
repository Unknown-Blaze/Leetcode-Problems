class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int size1 = nums1.size();
        int size2 = nums2.size();

        int i_m = ((size1 + size2) / 2) + 1;
        int i = 0, j = 0;
        int lastValue = 0, secondLastValue = 0;

        for (int k = 0; k < i_m; k++) {
            secondLastValue = lastValue;
            if (j == size2 || (i < size1 && nums1[i] <= nums2[j])) {
                lastValue = nums1[i++];
            } else {
                lastValue = nums2[j++];
            }
        }

        if ((size1 + size2) % 2 == 1) {
            return lastValue;
        } else {
            return (static_cast<double>(lastValue) + secondLastValue) / 2.0;
        }
    }
};
