import numpy as np

#1D Array
arr = np.array([1,2,3,4])
arr1 = np.array([5,6,7,8])

var = np.concatenate((arr,arr1))
print("Concatenate :",var)
print()

#2D Array
arr2 = np.array([[1,2],
                 [3,4]])
arr3 = np.array([[5,6],
                 [7,8]])    
var2 = np.stack((arr2,arr3),axis=0)
print("Concatenate along axis 1:\n",var2)