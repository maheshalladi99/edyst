import re
class Solution:
    def isNumber(self, A):
        a= bool(re.match("^\s*[\+-]?((\d+(\.\d*)?)|\.\d+)([eE][\+-]?\d+)?\s*$", A))
        if(a==True):
            return 1
        else:
            return 0
