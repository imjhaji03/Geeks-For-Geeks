#User function Template for python3

class Solution:
    def countOfElements(self, x, arr):
        # Code Here
        cnt = 0
        
        for i in range(len(arr)):
            if arr[i] <= x:
                cnt += 1
        
        return cnt        
