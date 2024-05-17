class Solution {
public:
    bool checkValidString(string s) {

        stack<int> stack1;
        stack<int> stack2;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(') stack1.push(i);
            else if (s[i] == '*') stack2.push(i);
            else{
                if (stack1.empty() && stack2.empty()) return false;
                else if (!stack1.empty()) stack1.pop();
                else stack2.pop();
            }
        }

        while (!stack2.empty() && !stack1.empty()){
            if (stack1.top() > stack2.top()) return false;
            stack1.pop();
            stack2.pop();
        }
        return stack1.size() <= stack2.size();

    }
};