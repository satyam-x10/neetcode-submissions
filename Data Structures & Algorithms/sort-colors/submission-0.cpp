class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n0=0,n2=0,n1=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                n0++;
            }else if(nums[i]==1){
                n1++;
            }else{
                n2++;
            }
        }
        for(int i=0;i<n;i++){
            if(n0>0){
               nums[i]=0;
               n0--;
            }else if(n1>0){
                nums[i]=1;
                n1--;
            }else{
                nums[i]=2;
            }
        }


    }
};