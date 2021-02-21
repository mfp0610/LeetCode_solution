class Solution(object):
    def isToeplitzMatrix(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: bool
        """
        lc=len(matrix)
        lr=len(matrix[0])
        if lc==1 or lr==1 :
            return True
        for i in range(lc-1):
            if matrix[i][:-1]!=matrix[i+1][1:] :
                return False
        return True

solution=Solution()
print(solution.isToeplitzMatrix([[1,2,3,4],[5,1,2,3],[9,5,1,2]]))