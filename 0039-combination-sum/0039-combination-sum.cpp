class Solution {
public:
    void fxn(int i ,int sum, vector<int> &candidates , vector<int> &tmp, vector<vector<int>> &res, int target){
        int n = candidates.size();
        if (i >= n || sum > target ){
            return;
        }
        
        if (sum == target){
            res.push_back(tmp);
            return;
        }
            
        
        tmp.push_back(candidates[i]);
        fxn(i, sum+candidates[i] , candidates, tmp , res , target);
        tmp.pop_back();
        fxn(i+1 , sum , candidates, tmp, res, target);
        

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
        vector<vector<int>> res;
        fxn(0 , 0, candidates, tmp , res, target);
        return res;
    }
};