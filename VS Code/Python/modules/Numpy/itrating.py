import numpy as np

#1D Array
arr = np.array([1,2,3,4,5,6,7,8])

#Aam Jindagi
for i in arr:
    print(i)

#Mentos Jindagi
for i in np.nditer(arr):
    print(i)

for i,d in np.ndenumerate(arr):
    print(i,d)