class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st; 
        
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            
            if (!st.empty() && st.top().first == c) {
                st.top().second++;
            } else {
                st.push({c, 1});  
            }

            if (st.top().second == k) {
                st.pop();
            }
        }

        
        string ans = "";
        while (!st.empty()) {
            auto p = st.top();
            st.pop();
            ans.append(p.second, p.first);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
