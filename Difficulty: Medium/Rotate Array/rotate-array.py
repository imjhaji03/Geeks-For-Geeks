#User function Template for python3

class Solution:
    #Function to rotate an array by d elements in counter-clockwise direction. 
    def rotateArr(self, arr, d):
        #Your code here
        n = len(arr)
        k = d % n
        
        lst = []
    
        
        for i in range(k, n):
            lst.append(arr[i])
            
        for i in range(k):
            lst.append(arr[i])  
            
        for i in range(len(lst)):
            arr[i] = lst[i]
        
        return 