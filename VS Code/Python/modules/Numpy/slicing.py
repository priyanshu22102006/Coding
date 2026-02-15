import numpy as np

#1D Array
arr = np.array([1,2,3,4,5,6,7,8,9])
print("2 to 5 :", arr[1:5])
print("2 to end :",arr[1:])
print("Start to 5:",arr[:5])
print()

#2D Array
arr1 = np.array([[1,2,3,4],
                 [5,6,7,8],
                 [9,10,11,12]])
print(arr1)
print("5 to 8",arr1[1,0:4])

#3D Array
arr2 = np.array([[[1,2,3],
                  [4,5,6]],
                 [[7,8,9],
                  [10,11,12]]])
print(arr2)
print()
print("5 to 8",arr2[0,1,1:3],arr2[1,0,0:2])