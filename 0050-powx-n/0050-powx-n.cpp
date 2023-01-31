class Solution {
public:
    double myPow(double x, int n) {
       if (n == 0) return 1;
        if (n == 1) return x;
        double result = 1;
        double base = x;
        long long absN = abs((long long) n);
        while (absN) {
            if (absN & 1) result *= base;
            base *= base;
            absN >>= 1;
        }
        return n < 0 ? 1 / result : result;
    }
};