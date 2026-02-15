import numpy as np

#1D Array
arr = np.array([9,8,7,4,5,6])
#               0 1 2 3 4 5 
#              -6-5-4-3-2-1
print(arr[-5])
print(arr[2])
print()

#2D Array
arr1 = np.array([[9,8,7],
                 [6,5,4]])
print(arr1.ndim) 
print(arr1[1])
print(arr1[0,1])
print(arr1[-1,-1])
print()

#3D Array
arr2 = np.array([[[9,8],
                  [7,6]]])
print(arr2)
print(arr2.ndim)
print(arr2[0,1])
print(arr2[0,0,1])