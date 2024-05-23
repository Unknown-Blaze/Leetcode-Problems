class Solution {
public:
    int countSegments(string s) {
        if (s.size() == 1 && s != " ") return 1;
        int i = 0;
        int n = s.size();
        int j = n-1;
        int flag = 0;
        int sum = 0;
        while (i < n && s[i] == ' ') i++;
        while (j >= 0 && s[j] == ' ') j--;
        if (i >= j) return 0;
        for (i; i < j; i++){
            if (s[i] != ' '){
                flag = 1;
            }else if (flag == 1){
                flag = 0;
                sum++;
            }
        }
        return sum+1;
    }
};