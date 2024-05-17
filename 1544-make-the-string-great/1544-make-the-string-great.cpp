class Solution {
public:
    string makeGood(string s) {
        if (s.size() == 1) return s;
        string t = "";
        stack<char> stack;
        
        for (int i = s.size()-1; i >= 0; i--){
            if (!stack.empty() && (abs(stack.top() - s[i]) == 32)) stack.pop();
            else stack.push(s[i]);
        }

        while (!stack.empty()){
            t += stack.top();
            stack.pop();
        }

        return t;
    }
};