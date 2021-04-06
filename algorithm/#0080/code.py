class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l=len(nums)
        i=1
        cnt=1
        while i<l :
            if nums[i]!=nums[i-1] :
                cnt=1
            else :
                cnt+=1
            if cnt>2 :
                del nums[i]
                l-=1
            else :
                i+=1