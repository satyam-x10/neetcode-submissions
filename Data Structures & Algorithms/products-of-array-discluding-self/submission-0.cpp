class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l2rp(n,1);
        vector<int> r2lp(n,1);
        int prod = 1;
        for (int i = 1; i < n; i++) {
            l2rp[i] = prod * nums[i - 1];
            prod = l2rp[i];
        }
        prod = 1;
        for (int i = n - 2; i >= 0; i--) {
            r2lp[i] = prod * nums[i + 1];
            prod = r2lp[i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(l2rp[i] * r2lp[i]);
        }

        return ans;
    }
};
