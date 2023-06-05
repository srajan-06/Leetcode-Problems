class Solution:
    def longestPalindrome(self, s: str) -> str:
        # if s==" " or s==len(s)*s[0]:
        #     return s

        # p = s[0]
        # l = 1

        # for i in range(len(s)):
        #     for j in range(len(s),0,-1):
        #         w = s[i:j]

        #         if w==w[::-1] and len(w)>l:
        #             p = w
        #             l = len(w)

        # return p


        # if s == s[::-1]:
        #     return s

        # else:
        #     return max([self.longestPalindrome(s[1:]),self.longestPalindrome(s[:-1])],key=len)

        longest = ""

        def findLongest(s, l, r):
            while l>=0 and r<len(s) and s[l]==s[r]:
                l -= 1
                r += 1
            return s[l+1:r]

        for i in range(len(s)):
            s1 = findLongest(s, i, i)
            if len(s1) > len(longest):
                longest = s1

            s2 = findLongest(s, i, i+1)
            if len(s2) > len(longest):
                longest = s2
        return longest
