class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int max=0;
        while(l<r){
            int curr=(r-l)*min(h[r],h[l]);
            curr>max?max=curr:max=max;
            h[r]<h[l]?r--:l++;
        }

        return max;
    }
};
