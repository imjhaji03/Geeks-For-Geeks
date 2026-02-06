class Solution:
    def prefSum(self, arr):
        # code here
        n = len(arr)
        prefix_res = [0]*n
        prefix_res[0] = arr[0]
        
        for i in range(1,n):
            prefix_res[i] = prefix_res[i-1] + arr[i]
        
        return prefix_res    
        
        
        