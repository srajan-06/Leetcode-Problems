class Solution:
    def addDigits(self, num: int) -> int:
        return num if num==0 else num%9 or 9
        # while(num>9):
        #     temp = num%10
        #     num = num/10 + temp
        # return int(num)
        # # if num==0:
        #     return 0
        # res = 10
        # s = str(num)
        # while(res>=10):
        #     res = 0
        #     for x in s:
        #         res += int(x)
        #     s = str(res)
        # return res 
