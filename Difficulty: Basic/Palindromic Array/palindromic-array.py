# Your task is to complete this function
# Function should return true/false
def isplaindrome(num):
    s = str(num)
    
    return s == s[::-1]
    
def isPalinArray(arr):
    # Code here
    
    for i in range(len(arr)):
        if not isplaindrome(arr[i]):
            return False
    
    return True        
        