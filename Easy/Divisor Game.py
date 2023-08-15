class Solution:
    def divisorGame(self, n: int) -> bool:
        if(n%2==0):
            return True
        elif(n%2!=0):
            return False
