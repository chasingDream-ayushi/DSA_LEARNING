class Solution {
public:
    void fxn(int i , vector<int> &ar, vector<int> &tmp,vector<vector<int>> &res) {
        
        
        if (i == ar.size()){
            res.push_back(tmp);
            return;
        }
        fxn(i+1, ar,tmp,res);
        tmp.push_back(ar[i]);
        fxn(i+1,ar,tmp,res);
        tmp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> res;
        vector <int> tmp;
        fxn(0,nums,tmp,res);
        return res;
    }
};