class Solution {
public:
    int maxProfit(vector<int>& p) {
            int ans=0;
            int buy=p[0];
            for(const int i:p){
                buy=min(buy,i);
                int profit=i-buy;
                ans=max(ans,profit);
            }

        return ans;
    }
};
