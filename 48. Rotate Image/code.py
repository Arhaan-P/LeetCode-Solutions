from typing import List
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n=len(matrix)
        #Transposing matrix
        for i in range(n):
            for j in range(i,n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        #Reverse rows
        for i in range(n//2):
            for j in range(n):
                matrix[j][i], matrix[j][n-1-i] = matrix[j][n-1-i], matrix[j][i]