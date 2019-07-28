class Solution:
    def plusOne(self, A):
        s = [str(i) for i in A]
        res = int("".join(s))
        return(list(str(res+1)))
        
        # write your method here