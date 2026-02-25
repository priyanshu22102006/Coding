import numpy as np

#copy
print("--------------Copy--------------")
var = np.array([1,2,3,4,5])
copy = var.copy()

print("Var :",var)
print("Copy :",copy)
print()
print("Changes in var")
var[0] = 10
print("Var after change:", var)
print("Copy after change:", copy)
print("--------------------------------")
print()

#View
print("--------------View--------------")
var = np.array([1,2,3,4,5])
view = var.view()

print("Var :",var)
print("View :",view)
print()
print("Changes in var")
var[0] = 10
print("Var after change:", var)
print("View after change:", view)   
print("--------------------------------")