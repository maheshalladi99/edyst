class Solution:
    def largestNumber(self, A):
        extval, ans = [], "" 
        l = len(str(max(A))) + 1
        for i in A: 
            temp = str(i) * l 
            extval.append((temp[:l:], i)) 
        extval.sort(reverse = True) 
        for i in extval: 
            ans += str(i[1]) 
          
        return ans 
        # write your method here