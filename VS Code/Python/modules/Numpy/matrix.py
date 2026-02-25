import numpy as np

#Matrix
matrix = np.array([[1,2,3],
                   [1,2,3]])
print(f"Matrix :\n{matrix}")
print("Adding matrix :\n",matrix + matrix)
print("Subtracting matrix :\n",matrix - matrix)
# print("Multiplying matrix :\n",matrix * matrix, matrix.dot(matrix))
#Transpose
print("Transpose of matrix :\n",matrix.T)
print("Transpose of matrix :\n",np.transpose(matrix))


matrix1 = np.array([[1,2],
                   [1,2]])
print("Multiplying matrix :\n", matrix1.dot(matrix1))

#2D Array
arr = np.array([[1,2],
                [1,2]])
print(f"2D Array :\n{arr}")
print("Adding 2D Array :\n",arr + arr)
print("Subtracting 2D Array :\n",arr - arr)
print("Multiplying 2D Array :\n",arr * arr)