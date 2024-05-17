class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        l1 = version1.split('.')
        l2 = version2.split('.')

        if (len(l1) >= len(l2)):
            small = l2
            big = l1
            flag = 1
        else:
            small = l1
            big = l2
            flag = 0
        
        for i in range(len(small)):
            if int(l2[i]) > int(l1[i]):
                return -1
            elif int(l1[i]) > int(l2[i]):
                return 1

        for i in range(len(small), len(big)):
            if flag == 1 and int(l1[i]) != 0:
                return 1
            if flag == 0 and int(l2[i]) != 0:
                return -1

        return 0