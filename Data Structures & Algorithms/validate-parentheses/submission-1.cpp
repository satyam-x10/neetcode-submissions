class Solution {
   public:
    bool isValid(string s) {
        stack<int> next;
        unordered_map<char, char> mp = {{'[', ']'}, {'(', ')'}, {'{', '}'}};
        for (char c : s) {
            if (mp.find(c) != mp.end()) {
                next.push(mp[c]);
            } else {
                if (!next.empty() && c == next.top()) {
                    next.pop();
                } else {
                    return false;
                }
            }
        }
        return next.empty();
    }
};
