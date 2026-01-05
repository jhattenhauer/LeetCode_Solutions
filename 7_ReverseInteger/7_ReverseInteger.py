class Solution:
    def reverse(self, x: int) -> int:
        neg = False
        if x < 0:
            neg = True
        string = str(abs(x))
        num = int(string[::-1]) 
        max = 2147483648
        if num > max:
            return 0
        if neg == True:
            return -1 * num
        return num
        