import numpy as np

#Using list
a = [1,2,3,4]
b = [1,2,3]

print(a+b)
print()
#using numpy array
arr = np.array([1,2,3,4])
arr2 = np.array([1,2,3])

#print(arr + arr2) #ERROR!!
#ValueError: operands could not be broadcast together with shapes (4,) (3,) 
arr = np.array([1,2,3,4])
print(arr.shape)
print(arr)
print()

arr2 = np.array([[1],
                [2],
                [3]])
print(arr2.shape)
print(arr2)
print()

print(arr+arr2)