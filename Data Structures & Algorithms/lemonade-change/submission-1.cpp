class Solution {
   public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (auto pr : bills) {
            if (pr == 5) {
                five++;
            }
            if (pr == 10) {
                ten++;
                if (five < 1) return false;
                five--;
            }
            if (pr == 20) {
                if (ten) {
                    ten--;
                    // five--;
                    if (five < 1) return false;
                    five--;

                } else {
                    if (five < 3) return false;

                    five -= 3;
                }
            }
        }
        return true;
    }
};