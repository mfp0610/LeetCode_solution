class Solution(object):
    def combine(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        import copy
        arr=[]
        def add(path,a):
            #arr.append("aas")
            if len(path)==k :
                arr.append(copy.deepcopy(path))
                return
            for i in range(a,n+1) :
                path.append(i)
                add(path,i+1)
                path.pop()
        add([],1)
        return arr

#solution=Solution()
#print(solution.combine(4,2))