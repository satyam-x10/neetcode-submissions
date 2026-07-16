class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int ans = n;
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                nums[i] = nums [n-1] ;
                n--;
                i--;
            }
        }
        // sort(nums.begin(), nums.begin() + n);
        cout << ans;
        return n;
    }
};