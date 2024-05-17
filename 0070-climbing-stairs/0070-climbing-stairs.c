int climbStairs(int n) {
    
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 0;
    int b = 1;
    int c = 0;

    for (int i = 0; i < n; i++){
        
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}