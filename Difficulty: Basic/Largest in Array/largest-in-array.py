class Solution:
    def largest(self, arr):
        # code here
        l = -float('inf')
        
        for i in range(len(arr)):
            if arr[i] > l:
                l = arr[i]
            
        return l    
        
