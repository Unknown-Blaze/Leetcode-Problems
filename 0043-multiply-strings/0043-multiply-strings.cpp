class Solution {
public:
    string multiply(string num1, string num2) {

        if (num1 == "0" || num2 == "0") return "0";

        int s1 = num1.size(), s2 = num2.size();
        vector<int> vsum(s1+s2, 0);
        int sum = 0;
        string ret = "";

        for (int i = 0; i < s1; i++){
            for (int j = 0; j < s2; j++){
                sum += (num1[s1-i-1] - '0')*(num2[s2-j-1] - '0');
                vtoint(vsum, sum, i, j); // Resets sum to 0, which is a temp variable
            }
        }

        int c = 0;
        for (int i = 0; i < vsum.size(); i++){
            vsum[i] += c;
            c = vsum[i]/10;
            vsum[i] %= 10;
        }
        
        for (auto num : vsum){
            ret += to_string(num);
        }

        reverse(ret.begin(), ret.end());
        int begin = 0;
        while (ret[begin] == '0'){
            begin++;
        }

        return ret.substr(begin, ret.size());
    }

private:
    void vtoint(vector<int>& vsum, int& sum, int i, int j){
        int idx = 0;
        while (sum != 0){
            vsum[i + j + idx++] += sum % 10;
            sum /= 10;
        }
    }
};