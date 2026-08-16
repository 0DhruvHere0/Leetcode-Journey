class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        transposed = [list(row) for row in zip(*matrix)]
        return transposed