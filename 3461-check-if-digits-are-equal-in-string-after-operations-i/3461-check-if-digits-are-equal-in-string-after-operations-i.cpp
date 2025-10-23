class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string next = "";
            for (int i = 0; i < s.size() - 1; i++) {
                int a = s[i] - '0';
                int b = s[i + 1] - '0';
                int newDigit = (a + b) % 10;
                next += (newDigit + '0');
            }
            s = next;
        }
        return s[0] == s[1];
    }
};