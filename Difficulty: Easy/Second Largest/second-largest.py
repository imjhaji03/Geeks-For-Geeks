class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        l = -float('inf')
        s = -float('inf')
        
        for i in range(len(arr)):
            if arr[i] > l:
                s = l
                l = arr[i]
            elif arr[i] < l and arr[i] > s:
                s = arr[i]
        
        return s if s != -float('inf') else -1 