class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            if (mp.contains(target - nums[i])) {
                int f = i, g = mp[target - nums[i]];
                if(f==g)continue;
                f > g ? ans = {g, f} :ans= {f, g};
                return ans;
            }
        }
        return {-1, -1};
    }
};
