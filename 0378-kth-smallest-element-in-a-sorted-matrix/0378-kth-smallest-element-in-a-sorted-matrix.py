class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int):
        a = []
        for i in matrix:
            for j in i:
                a.append(j)
        a.sort()
        u = a[k-1]
        return u
                
        