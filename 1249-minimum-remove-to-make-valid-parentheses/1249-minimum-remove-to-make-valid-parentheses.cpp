class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string new_s = "";

        int size = s.size();
        
        vector<char> st(s.begin(), s.end());
        int open = 0, close = 0;

        for (int i = size-1; i >= 0; i--){
            if (st[i] == ')'){
                close++;
            }else if (st[i] == '('){
                if (close == 0)
                    st[i] = '*';
                else close--;
            }
        }
        for (int i = 0; i < size; i++){
            
            if (st[i] == '('){
                open++;
            }else if (st[i] == ')'){
                if (open == 0)
                    continue;
                else open--;
            }else if (st[i] == '*') continue;
            new_s += st[i];
        }


        return new_s;

    }
};