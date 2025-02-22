#{ 
 # Driver Code Starts

# } Driver Code Ends
class Solution:
    # Function to sort an array of 0s, 1s, and 2s
    def sort012(self, arr):
        countone = 0
        countzero = 0
        counttwo = 0
        
        n = len(arr)
        for i in range(n):
            if arr[i] == 0:
                countzero += 1
            if arr[i] == 1:
                countone += 1
            if arr[i] == 2:
                counttwo += 1
        
        index = 0
        
        while countzero > 0:
            
            arr[index] = 0
            
            index +=1
            countzero -=1
            
        while countone > 0:
            
            arr[index] = 1
            
            index +=1
            countone -=1
            
        while counttwo > 0:
            
            arr[index] = 2
            
            index +=1
            counttwo -=1  
            
            
            

#{ 
 # Driver Code Starts.
def main():
    t = int(input().strip())  # Read the number of test cases
    ob = Solution()

    while t > 0:
        t -= 1
        arr = list(map(int,
                       input().strip().split())
                   )  # Read the array as space-separated integers
        ob.sort012(arr)  # Sort the array

        print(' '.join(map(str, arr)))  # Print the sorted array
        print("~")
        
if __name__ == "__main__":
    main()

# } Driver Code Ends