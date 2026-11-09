import numpy as np 
# Iteration vs Vectorization difference
# a = np.array([1, 2, 3, 4])
# for i in range(len(a)):
#     a[i] = a[i] * 2
#     print(a[i])

# But NumPy allows:
a = a * 2
# print(a)

# The second approach is vectorized.
# Why prefer vectorization?
# Usually:
# shorter code
# cleaner code
# better performance for numerical workloads
# takes advantage of optimized NumPy operations

## In NumPy, vectorized operations are generally preferred over explicit Python loops for numerical computations because they can be more concise and often much faster.
####iteration 

a1=np.arange(10)
# print(a1)
a2=np.arange(12).reshape(3,4)
# print(a2)
a3=np.arange(27).reshape(3,3,3)
# print(a3)

##1-d
# for i in a1:
#     print(i)

##2-d:ye har bar 1-d array print karega
# for i in a2:
#     print(i)

##3-d:ye har bar 2-d array print karega
# for i in a3:
#     print(i)


##nditer()
# nditer ka kaam hai ki kitna bhi dimension ka array ho usse 1-d me convert kar deta hia

# for i in np.nditer(a3):
#     print(i)


# Iterating with Index — enumerate()
# Sometimes you need both:
# index
# value
# This is normal Python functionality and works nicely with NumPy arrays.

# a = np.array([10, 20, 30])
# for index, value in enumerate(a):
#     print(index, value)


### np.ndenumerate() 

# If you want the index and value of every element, NumPy provides np.ndenumerate().
# This is especially useful for multidimensional arrays.

# a = np.array([
#     [10, 20],
#     [30, 40]
# ])
# for index, value in np.ndenumerate(a):
#     print(index, value)


# np.ndindex()-a[index] return
# np.ndindex() lets you iterate over indexes.

# a = np.zeros((2, 3))
# for index in np.ndindex(a.shape):
#     print(index)
