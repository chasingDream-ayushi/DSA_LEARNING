class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        queue<string> q;
        unordered_set<string> seen;
        string smallest = s;

        q.push(s);
        seen.insert(s);

        while (!q.empty()) {
            string curr = q.front();
            q.pop();

            smallest = min(smallest, curr);
            string added = curr;
            for (int i = 1; i < added.size(); i += 2) {
                added[i] = ((added[i] - '0' + a) % 10) + '0';
            }

            if (!seen.count(added)) {
                seen.insert(added);
                q.push(added);
            }

            string rotated = curr.substr(curr.size() - b) + curr.substr(0, curr.size() - b);

            if (!seen.count(rotated)) {
                seen.insert(rotated);
                q.push(rotated);
            }
        }

        return smallest;
    }
};