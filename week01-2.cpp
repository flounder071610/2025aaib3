# 01-2 py LeetCode 學習計畫 Python版本1 for迴圈
# 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        #sadbutsad
        #sad i:0
        # sad i:1
        #....
        #     sad i:6
        for i in range(H-N+1): #長度9 找長度3 有0...6
            if haystack[i:i+N] == needle: #若長度相同
            #把字串，從i開始。取到i+N 共N個字
                return i #成功找到位置
        return -1 #沒有成功


# 01-2 py LeetCode 學習計畫 Python版本2 find()函式
# 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
       return haystack.find(needle)
