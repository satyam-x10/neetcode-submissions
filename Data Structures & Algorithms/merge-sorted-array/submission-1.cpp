class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> dup (nums1.begin(),nums1.begin()+m);
        int l=0,r=0;
        for (int i=0;i<m+n;i++){
            if (l >= m) {
                nums1[i] = nums2[r];
                r++;
            }
            else if (r >= n) {
                nums1[i] = dup[l];
                l++;
            }else if(dup[l]<nums2[r]){
                nums1[i]=dup[l];
                l++;
            }else{
                nums1[i]=nums2[r];r++;
            }
        }
    }
};