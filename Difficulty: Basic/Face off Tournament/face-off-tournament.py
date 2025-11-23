def winner(arr, m, n):
    #code here
    res1 = []
    res2 = []
    
    for i in range(len(arr)):
        if arr[i] % m == 0:
            res1.append(arr[i])
        elif arr[i] % n == 0:
            res2.append(arr[i])
        
    if len(res1) > len(res2):
        return "Ram"
    elif len(res1) == len(res2):
        return "Both"
    else:
        return "Rohan"