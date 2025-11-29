class Solution {
public:
    void fxn(int i, vector<int> &nums , vector<int> &tmp , vector<vector<int>> &res){
        int n = nums.size();
        if (i >= n){
            res.push_back(tmp);
            return;
        }
        tmp.push_back(nums[i]);
        fxn(i+1 , nums , tmp , res);
        tmp.pop_back();
        fxn(i+1 , nums  , tmp , res);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> tmp;
        
        vector<vector<int>> res;
        fxn(0 , nums , tmp , res);
        set<vector<int>> st(res.begin(), res.end());
        return vector<vector<int>>(st.begin(), st.end());
    }
};