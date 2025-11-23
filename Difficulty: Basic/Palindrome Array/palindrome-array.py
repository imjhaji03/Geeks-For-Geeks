
from typing import List


class Solution:
    def isPerfect(self, arr : List[int]) -> bool:
        # code here
        i = 0
        j = len(arr)-1
        
        while i <= j:
            if arr[i] != arr[j]:
                return False
            i += 1
            j -= 1
        
        return True
