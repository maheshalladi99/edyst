class Solution:
    def Met(self, A, B, k):
        # write your method here
        k1=A+B
        t=list(set(k1));
        t.sort();
        print(t[k-1])