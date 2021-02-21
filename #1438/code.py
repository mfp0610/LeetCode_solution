class Solution(object):
    def longestSubarray(self, nums, limit):
        """
        :type nums: List[int]
        :type limit: int
        :rtype: int
        """
        n=len(nums)
        incq=[]  #increase_queue
        decq=[]  #decrease_queue
        ans,lf,rf=0,0,0
        while rf<n:
            while incq and nums[incq[-1]]>=nums[rf]:
                incq.pop(-1)
            incq.append(rf)
            while decq and nums[decq[-1]]<=nums[rf]:
                decq.pop(-1)
            decq.append(rf)

            while incq and decq and nums[decq[0]]-nums[incq[0]]>limit:
                if lf==incq[0]:
                    incq.pop(0)
                if lf==decq[0]:
                    decq.pop(0)
                lf+=1

            print(lf,rf,"incq",incq)
            print(lf,rf,"decq",decq)
            ans=max(ans,rf-lf+1)
            rf+=1
        #print(incq)
        #print(decq)

        return ans

l1=[8,2,4,7]
l2=[10,1,2,4,7,2]
l3=[4,2,2,2,4,4,2,2]
solution=Solution()
print(solution.longestSubarray(l1,4))
print(solution.longestSubarray(l2,5))
print(solution.longestSubarray(l3,0))