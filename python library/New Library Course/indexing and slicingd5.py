import numpy as np 
 
# index :if given numpy array to fetch the element by use indexing
# ek time par ek datako fetch karte hai in index

a1=np.arange(10)
a2=np.arange(12).reshape(3,4)
a3=np.arange(8).reshape(2,2,2)

# index 1-d
# print(a1)
# print(a1[9])#normal/positive index:left--> right
# print(a1[-1])#negative index:right<---left check

# # index 2-d
# 2-d hmesha 1-d se bnata hia
# print(a2)
# print(a2[1,2])#row first,clmn2
# print(a2[1,0]) 

# index 3-d
# 3-d tensor always 2-d se banata hai:
# print(a3)
# print(a3[1,0,1])#row first,clmn 2-d and next same pass index
# print(a3[0,1,0]) 
# print(a3[0,0,0])
# print(a3[1,1,1])
# print(a3[1,1,0])


##slicing
# ek time par multple data ko fetch kar sakte hia by using slicing

# # for 1-d
# print(a1[2:5])#start=2,end=5
# print(a1[2:5:2])#start=2,end=5,step=2

# for 2-d array
# print(a2)
# print(a2[0,:])#pahla row all element-1.idx start=0,firstall row use-":"
# print(a2[1,:])
# print(a2[2,:])

# for individual all clmn find
# print(a2[:,2])


# if you want in 2-d given array-5,6 and 9,10
# print(a2[1:,1:3])

# if you want to access first row-0,3 and 8,10-last row
# print(a2[::2,::3])

# if you want to access first row-1,3 and 9,11-last row
# print(a2[::2,1::2])

# if find 4,7
# print(a2[1,::3])

# if i find 1,2,3 and 5,6,7
# print(a2[0:2,1:])

# if i want to 1,3 and 5,7
# print(a2[0:2,1::2])

##3-d array consist:3-2d array in tensor
t=np.arange(27).reshape(3,3,3)
# print(t)

# print(t[::2])#pahla row all element,last row all element

# first 2-d array ka 2nd row all element print
# print(t[::3,1:2])
# print(t[0,1,:])

# 2nd 2-d array ke bich ke all clmn print karna hai
# print(t[1,:,1])

# 3rd 2-d array ke last ke all 2-row(22,23 and 25,26) print karna hai
# print(t[2,1:,1:])

# print 0,2 and 18,20
print(t[::2,0,::2])
