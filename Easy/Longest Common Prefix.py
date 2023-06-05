class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        n = len(strs)

        if n==0:
            return ""
        
        res = ""
        strs.sort()
        fw = strs[0]
        lw = strs[-1]

        l = min(len(fw),len(lw))

        for i in range(l):
            if fw[i]==lw[i]:
                res += fw[i]
            else:
                break
        
        return res
