class Solution {
   public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (const int num : nums) {
            mp[num]++;
            if(mp[num]==(nums.size()/3)+1){
                ans.push_back(num);
            }
        }
        return ans;
    }
};