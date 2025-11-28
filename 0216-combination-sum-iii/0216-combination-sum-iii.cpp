class Solution {
public:
    void fxn(int i , int sum, vector<int> &tmp, vector<vector<int>> &res , int k , int n){
        if (i > 10){
            return;
        }
        if (sum == n && tmp.size() == k){
            res.push_back(tmp);
            return;
        }
        if (sum > n || tmp.size() > k) return;
        tmp.push_back(i);
        fxn(i+1, sum + i, tmp , res, k , n);
        tmp.pop_back();
        fxn(i+1 , sum , tmp , res , k , n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> tmp;
        vector<vector<int>> res;
        fxn(1 , 0 , tmp , res , k , n);
        return res;
    }
};