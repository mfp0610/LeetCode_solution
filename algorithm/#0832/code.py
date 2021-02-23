class Solution(object):
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        reta=[]
        for ai in A :
            retai=ai[::-1]
            for i in range(len(retai)) :
                if retai[i] == 0 :
                    retai[i]=1
                else :
                    retai[i]=0
            reta.append(retai)
        return reta
        

solution=Solution()
print(solution.flipAndInvertImage([[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]))