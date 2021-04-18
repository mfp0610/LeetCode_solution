class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ret=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) return 0;
            if(nums[i]<0) ret++;
        }
        if(ret%2) return -1;
        return 1;
    }
};
