class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ret = search(citations, 0, citations.size());
        return ret;
    }

    int search(vector<int>& citations, int l, int h){
        int n = citations.size();
        int ans = 0;
        while (l < h){
            int m = l + (h-l)/2;
            if (citations[m] >= n-m) {
                ans = max(ans, n-m);
                h = m;
            }else{
                l = m+1;
            }
        }
        return ans;
    }
};