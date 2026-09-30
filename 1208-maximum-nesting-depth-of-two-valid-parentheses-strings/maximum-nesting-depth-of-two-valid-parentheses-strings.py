class Solution(object):
    def maxDepthAfterSplit(self, seq):
        """
        :type seq: str
        :rtype: List[int]
        """
        n = len(seq)
        depth = 0
        ans = [0] * n
        for i in range(n):
            if(seq[i] == '('):
                depth += 1
                ans[i] = depth % 2
            else:
                ans[i] = depth % 2
                depth -= 1

        return ans            
        