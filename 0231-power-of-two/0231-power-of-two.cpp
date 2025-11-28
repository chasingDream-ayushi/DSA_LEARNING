class Solution {
public:
    bool isPowerOfTwo(int n) {
        long mul = 1;
        while (mul < n){
            mul = mul*2;
        }
        if (mul == n){
            return true;
        }
        else{
            return false;
        }
    }
};