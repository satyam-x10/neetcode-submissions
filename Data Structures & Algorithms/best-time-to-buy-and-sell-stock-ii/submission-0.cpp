class Solution {
public:
    int maxProfit(vector<int>& p) {
        int sum=0;
        int buy=p[0];
        for(int i=0;i<p.size();i++){
            int prof= p[i]-buy;
            prof>0?sum+=prof:sum=sum;
            buy=p[i];
        }
        return sum;
    }
};