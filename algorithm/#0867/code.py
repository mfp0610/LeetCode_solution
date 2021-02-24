class Solution(object):
    def transpose(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """
        ret=[[] for i in range(len(matrix[0]))]
        for mati in matrix :
            for i in range(len(matrix[0])) :
                #print(mati,i)
                ret[i].append(mati[i])
        return ret

solution=Solution()
print(solution.transpose([[1,2,3],[4,5,6]]))