class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int k=n;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>0){
                nums[i]=INT_MAX;
                k--;
            }else{
                mp[nums[i]]=1;
            }
        }
    sort(nums.begin(),nums.begin()+n);
    return k;
    }
};