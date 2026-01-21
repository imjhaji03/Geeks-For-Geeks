#User function Template for python3

class Solution:
    #Function to rotate an array by d elements in counter-clockwise direction. 
    def rotateArr(self, arr, d):
        #Your code here
        h = len(arr)
        l = 0
        m = d % h
        
        arr[l:m] = arr[l:m] [::-1]
        arr[m:h] = arr[m:h] [::-1]
        arr[l:h] = arr[l:h][::-1]
        
        return 