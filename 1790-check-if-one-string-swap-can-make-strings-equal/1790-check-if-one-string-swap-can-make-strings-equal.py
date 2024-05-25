class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        
        mismatch = []
        if s1 == s2:
            return True
        for i in range(len(s1)):
            if s1[i] != s2[i]:
                mismatch.append(s1[i])
                mismatch.append(s2[i])
        
        if len(mismatch) != 4:
            return False
        if mismatch[0] == mismatch[3] and mismatch[1] == mismatch[2]:
            return True
        else:
            return False