class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int> arr{a, b, c};
        sort(arr.begin(), arr.end());
        
        if (arr[0] + arr[1] >= arr[2]) return (a+b+c)/2;
        else return (arr[0] + arr[1]);
    }
};