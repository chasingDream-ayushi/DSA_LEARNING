class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;
        for (int i = 0; i < operations.size(); i++){
            string op = operations[i];
            if (op == "C"){
                if (!st.empty()){
                    st.pop();
                }
            }
            else if (op == "D"){
                if (!st.empty()){
                    st.push(st.top() * 2);
                }
            }
            else if (op == "+"){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else{
                st.push(stoi(op));
            }
            
        }
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        return sum;
        
        
    }
};