class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        cache = {}
        def bfs(i,j):
            if (i,j) in cache:
                return cache[(i,j)]
            
            if i>=len(s) and j>=len(p):
                return True

            if j>=len(p):
                return False

            match = i<len(s) and (s[i]==p[j] or p[j]==".") 
            
            if ((j+1)<len(p) and p[j+1]=="*"):
                cache[(i,j)] = bfs(i,j+2) or (match and bfs(i+1,j))
                return cache[(i,j)]
            if match:        
                cache[(i,j)] = bfs(i+1,j+1)
                return cache[(i,j)]
        return bfs(0,0)
