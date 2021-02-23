class Solution(object):
    def maxSatisfied(self, customers, grumpy, X):
        """
        :type customers: List[int]
        :type grumpy: List[int]
        :type X: int
        :rtype: int
        """
        ret=0
        sum_ang=[0]*len(customers) #the pre-sum of angry customers
        
        # get the stable unangry customer
        for tm in range(len(customers)) :
            if grumpy[tm] == 0 : 
                ret+=customers[tm]
            sum_ang[tm]=sum_ang[tm-1]
            if grumpy[tm] == 1 :
                sum_ang[tm]+=customers[tm]
        #print(sum_ang)

        # get the maximum turn-back customer
        retplus=sum_ang[X-1]
        for tm in range(1,len(customers)-X+1) :
            retplus=max(retplus,sum_ang[tm+X-1]-sum_ang[tm-1])
        
        ret+=retplus
        return ret

solution=Solution()
print(solution.maxSatisfied(customers=[1,0,1,2,1,1,7,5], grumpy=[0,1,0,1,0,1,0,1], X=3))