class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxp = 0
        for i in range(len(prices)):
            if i-1 >= 0:
                if prices[i] > prices[i-1]:
                    maxp += (prices[i] - prices[i-1])
        return maxp
                