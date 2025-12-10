class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while (stones.size() != 1){
            int n = stones.size();
            int i = n-1;
            int j = n-2;
            sort(stones.begin(), stones.end());  
            if (stones[i] == stones[j]){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones[j] = stones[i] - stones[j];
                stones.pop_back();
            }
        
            if (stones.size() == 0) return 0;
        }
        return stones[0];
    }
};