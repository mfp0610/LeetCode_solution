class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs : 
            return ""
        s1=min(strs)
        s2=max(strs)
        for i,x in enumerate(s1):
            if x!=s2[i]:
                return s2[:i]
        return s1

solution=Solution()
print(solution.longestCommonPrefix(["flower","flow","flight"]))