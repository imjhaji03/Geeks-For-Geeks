class Solution:
    def getAlternates(self, arr):
        # Code Here
        lst = []
        
        for i in range(len(arr)):
            if i % 2 == 0:
                lst.append(arr[i])
        
        
        return lst        