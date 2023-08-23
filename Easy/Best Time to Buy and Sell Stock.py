class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)

        if n<=1:
            return 0
        
        low = prices[0]
        maxProfit = 0
        for i in range(n):
            low = min(low,prices[i])
            maxProfit = max(maxProfit,prices[i]-low)
        
        return maxProfit
