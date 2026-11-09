import numpy as np 

#### numpy attributes 
# :har numpy array numpy class ka object hota hai
# har numpy array jo bnate hai wah numpy class ke attribute ko access kar sakta hai


a1=np.arange(10) #1-d:vector
a2=np.arange(12,dtype=float).reshape(3,4) #2d:matrics
a3=np.arange(8).reshape(2,2,2) #3-d:tesor called

##ndim:number of dimension told on the given input array
# print(a1.ndim)
# print(a2.ndim)
# print(a3.ndim)

# a = np.array([10,20,30,40,50,60,70,80,90])#=9 array element
# print(a)
# print(a.ndim)

# b =a.reshape(3,3)
# print(b)
# print(b.ndim)

# c = a.reshape(1,9,1)
# print(c)
# print(c.ndim)

##shape:number of dimensions( row and clmn) says/told on the given input array

# print(a1.shape)
# print(a2.shape)
# print(a3.shape)

##itemsize:har item  memory me  kitna size occupy karega
# print(a1.itemsize)
# print(a2.itemsize)
# print(a3.itemsize)

##dtype:what is datatype of given i/p array
# print(a1.dtype)
# print(a2.dtype)
# print(a3.dtype)

###changing datatype:
# kisi numpy array ke bne hue data ko change bhi kar sakte hai

##astype:memory ko optimize karne ka method hai
# t=a1.astype(np.int32)
# print(a2.astype(np.int32))
# print(a3.astype(np.int32))
# print(t.dtype)


# h = np.array([[2,3,5,7],[8,9,5,4]])
# print (h.shape)   # It tells how many rows and column are in array
# print(h.ndim)  # It only shows how many dimension
# print (h.size) # It shows how many elements are in array
# print(h.dtype)  # It shows the datatype of the array

