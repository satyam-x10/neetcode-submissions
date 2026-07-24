class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> mp;
        for (const string str : strs) {
            vector<int> freq(26, 0);
            for (const char c : str) {
                freq[c - 'a']++;
            }
            string key = "";
            for (const int f : freq) {
                key += to_string(f) ;
                key+= "#";
            }
            if (mp.find(key)!=mp.end()) {
                ans[mp[key]].push_back(str);
            } else {
                mp[key] = ans.size();
                ans.push_back({});
                ans[mp[key]].push_back(str);
            }
        }
        return ans;
    }
};
