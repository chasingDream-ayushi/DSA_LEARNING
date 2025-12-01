class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;

    void backtrack(int start, int n, int k) {
        if (tmp.size() == k) {
            res.push_back(tmp);
            return;
        }

        
        for (int i = start; i <= n - (k - tmp.size()) + 1; i++) {
            tmp.push_back(i);
            backtrack(i + 1, n, k);
            tmp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        backtrack(1, n, k);
        return res;
    }
};
