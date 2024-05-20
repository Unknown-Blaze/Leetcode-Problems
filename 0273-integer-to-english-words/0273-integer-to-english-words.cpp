class Solution {
public:

    string threedigit(int num){
        
        string ret = "";
        if (num == 0) return ret;
        if (num / 100 != 0) ret += map[num/100] + " Hundred ";
        if (num % 100 == 0) return ret;
        if (map.find(num % 100) != map.end()) ret += map[num%100];
        else ret += map[(num%100 - num%10)] + " " + map[num%10];
        return ret; 
    }

    string numberToWords(int num) {
        if (num <= 20) return map[num];
        string ret = "";
        deque<string> dq;
        long unit = 1;
        int flag = 1;
        while (num != 0){
            int val = num%1000;
            string mid = threedigit(val);
            if (!flag && mid != "") {
                cout << mid << endl;
                dq.push_front(" "); 
                dq.push_front(map[unit]);
                if (mid[mid.size()-1] != ' ') dq.push_front(" "); 
            }
            
            dq.push_front(mid);
            unit *= 1000;
            num = num / 1000;
            flag = 0;
        }
        for (auto s = dq.begin(); s != dq.end(); s++){
            ret += *s;
        }
        if (ret[ret.size()-1] == ' ') return ret.substr(0, ret.size()-1);
        return ret;
    }
private:
    unordered_map<int, string> map =    {{0, "Zero"},
                                        {1, "One"},
                                        {2, "Two"},
                                        {3, "Three"},
                                        {4, "Four"},
                                        {5, "Five"},
                                        {6, "Six"},
                                        {7, "Seven"},
                                        {8, "Eight"},
                                        {9, "Nine"},
                                        {10, "Ten"},
                                        {11, "Eleven"},
                                        {12, "Twelve"},
                                        {13, "Thirteen"},
                                        {14, "Fourteen"},
                                        {15, "Fifteen"},
                                        {16, "Sixteen"},
                                        {17, "Seventeen"},
                                        {18, "Eighteen"},
                                        {19, "Nineteen"},
                                        {20, "Twenty"},
                                        {30, "Thirty"},
                                        {40, "Forty"},
                                        {50, "Fifty"},
                                        {60, "Sixty"},
                                        {70, "Seventy"},
                                        {80, "Eighty"},
                                        {90, "Ninety"},
                                        {100, "Hundred"},
                                        {1000, "Thousand"},
                                        {1000000, "Million"},
                                        {1000000000, "Billion"}
                                        };
};