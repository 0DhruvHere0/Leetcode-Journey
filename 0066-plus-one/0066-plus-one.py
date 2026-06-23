class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        a = int("".join(map(str, digits)))
        b= a+1
        result= list(map(int, str(b)))
        return result