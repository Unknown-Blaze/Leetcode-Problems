bool isVowel(char s){
    char ch = tolower(s);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}

bool halvesAreAlike(char* s) {
    int a_len = 0, b_len = 0;
    int len = strlen(s);
    int i = 0;
    for (i; i < len/2; i++){
        if (isVowel(s[i])){
            a_len++;
        }
    }
    for (i; i < len; i++){
        if (isVowel(s[i])){
            b_len++;
        }
    }
    return a_len == b_len;
}

