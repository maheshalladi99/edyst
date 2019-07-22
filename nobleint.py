class Solution:
    def solve(self, A):
        for i in range(0, len(A)): 
            count = 0
            for j in range(0, len(A)): 
                if (A[i] < A[j]): 
                    count += 1
            if (count == A[i]): 
                return(1)
                break
        return(-1)
        # write your method here