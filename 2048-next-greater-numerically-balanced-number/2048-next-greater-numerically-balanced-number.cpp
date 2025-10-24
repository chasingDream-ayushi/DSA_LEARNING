class Solution {
public:
    int nextBeautifulNumber(int n) {
        unordered_set<int> seen;
        for (int mask = 1; mask < (1 << 9); ++mask) {
            int total_len = 0;
            string s;
            bool overflow = false;
            for (int d = 1; d <= 9; ++d) {
                if (mask & (1 << (d - 1))) {
                    total_len += d;
                    if (total_len > 7) {
                        overflow = true;
                        break;
                    }
                    s.append(d, char('0' + d));
                }
            }
            if (overflow) continue;
            if (s.empty()) continue;
            sort(s.begin(), s.end());
            do {
                int val = stoi(s);
                seen.insert(val);
            } while (next_permutation(s.begin(), s.end()));
        }

        vector<int> balanced;
        balanced.reserve(seen.size());
        for (int x : seen) balanced.push_back(x);
        sort(balanced.begin(), balanced.end());

        for (int val : balanced) {
            if (val > n) return val;
        }
        return -1;
    }
};