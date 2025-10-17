class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // cap result at 2^31 - 1
        }
        int quotient = dividend / divisor; // safe otherwise
        return quotient;

    }
};