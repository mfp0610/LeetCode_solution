class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        numcnt={}
        for i in range(len(nums)) :
            num=nums[i]
            if target-num in numcnt.keys() :
                return [numcnt[target-num],i]
            if num not in numcnt.keys() :
                numcnt[num]=i
        

solution=Solution()
print(solution.twoSum([2,7,11,15],9))
print(solution.twoSum([3,2,4],6))
print(solution.twoSum([3,3],6))