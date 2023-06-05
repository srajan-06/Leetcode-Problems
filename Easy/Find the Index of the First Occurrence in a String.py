class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        lh = len(haystack)
        ln = len(needle)
        m = 0
        if ln==1 and lh==1 and(haystack[0]==needle[0]):
            return 0;

        for i in range(0,(lh-ln+1)):
            k = i
            j = 0
            while(j<ln and haystack[k]==needle[j]):
                m = i
                if j==ln-1:
                    return m
                    break
                j += 1
                k += 1
        return -1
