class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        
        for (int minHour = 1 ; minHour <= *max_element(piles.begin(), piles.end()) ; minHour++){
            long long sum = 0;
            for (int i = 0; i < n; i++){
                sum += ceil(1.0*piles[i]/minHour);
                
            }
            if (sum <= h){
                return minHour;
            }
        
            
        
        }
        return -1;
    }
};