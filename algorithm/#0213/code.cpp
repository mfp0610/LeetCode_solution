class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        int rec,pre1,pre2,ans;
        pre2=0, pre1=nums[0];
        for(int i=1;i<nums.size();i++) {
            rec=max(pre1,pre2+nums[i]);
            pre2=pre1, pre1=rec;
        }
        ans=pre2;
        pre2=0, pre1=0;
        for(int i=1;i<nums.size();i++) {
            rec=max(pre1,pre2+nums[i]);
            pre2=pre1, pre1=rec;
        }
        ans=max(ans,rec);
        return ans;
    }
};
//https://leetcode-cn.com/problems/house-robber-ii/
