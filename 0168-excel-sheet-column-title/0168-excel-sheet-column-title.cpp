class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ret = "";
        while (columnNumber > 0) {
            columnNumber--; 
            int remainder = columnNumber % 26;
            ret += (char)(remainder + 'A');
            columnNumber /= 26;
        }
        reverse(ret.begin(), ret.end()); 
        return ret;
    }
};