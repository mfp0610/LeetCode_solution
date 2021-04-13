class Solution(object):
    def largestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        numstr=map(str,nums)
        compare=lambda x,y: 1 if x+y<y+x else -1
        numstr.sort(cmp=compare)
        ret="".join(numstr)
        if ret[0]=="0":
            ret="0"
        return ret