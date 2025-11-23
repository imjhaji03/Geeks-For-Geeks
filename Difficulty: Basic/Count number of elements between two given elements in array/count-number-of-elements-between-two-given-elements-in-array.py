class Solution:
    def getCount(self, arr, num1, num2):
        #Your code goes here
        n1 = arr.index(num1)
        n2 = len(arr)-1 - arr[::-1].index(num2)
        res = 0
        for i in range(n1, n2-1):
            res += 1
            
        return res    