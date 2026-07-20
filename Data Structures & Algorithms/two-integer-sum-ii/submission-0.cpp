class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        // for(const int num:numbers);
        for (int i = 0; i < numbers.size(); i++) {
            mp[numbers[i]] = i+1;
        }
        for (int i = 0; i < numbers.size(); i++) {
            if(mp[target-numbers[i]]>0){
                return (i+1>mp[target-numbers[i]])?vector<int>{mp[target-numbers[i]],i+1}:vector<int>{i+1,mp[target-numbers[i]]};
            }
        }
        return {-1,-1};
    }
};
