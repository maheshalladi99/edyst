class Solution:
    def merge(self, A, B):
        for i in range(0,len(B)):
            A.append(B[i])
        A=A.sort() 
        return A
        # write your method here
