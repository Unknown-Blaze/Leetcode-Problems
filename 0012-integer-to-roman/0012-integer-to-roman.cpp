class Solution {
public:
    string intToRoman(int num) {
        // I saw a much more trivial and faster solution using the following
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousands[]={"","M","MM","MMM"};

        // From this, the code is relatively simple to implement

        string ret = "";
        ret += thousands[num/1000] + hundreds[num/100 % 10] + tens[num/10 % 10] + ones[num % 10];
        return ret;
    }
};