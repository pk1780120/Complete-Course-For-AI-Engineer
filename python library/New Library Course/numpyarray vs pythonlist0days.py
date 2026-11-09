import numpy as np 

####1.speed(time) 2.memory(space)         

##list[] in python
# for calculate time through list
# a=[i for i in range(10000000)]
# b=[i for i in range(10000000,20000000)]
# c=[]
# import time
# start=time.time()
# for i in range(len(a)):
#     c.append(a[i]+b[i])
# print(time.time()-start)

# ##numpy array
# # for calculate time through list

# a=np.arange(10000000)
# b=np.arange(10000000,20000000)
# start=time.time()
# c=a+b
# print(time.time()-start)

# # print(1.82/0.14)#13times faster numpy array than python list in time
# major difference numpy array vs python list
##reason:
# numpy:-
# 1.numpy hia jo c-lang type array use karta hai
# c lang type means-static array i.e fixed size
# 2.it is not referencial arrray means:-isko directly item/value memory me direct store  kar sakte na ki uska address

# reason:
# pythonlist[]:-
# 1.python list is dynamic array i.e means:- har bar iska size double hote jata hai/copy hote rahta hai
# 2. it is  referencial arrray means:-isko directly item/value memory me  store nhi  kar sakte hai because ki uska address store karte hai. 
# memory me ja kar khojte ho ki kitna space lga aur item kaha hia

# conclusion
# isi wajah se nupmy array is faster the python list


##2.memory(space)

# # list[] in python use
# a=[ i for i in range(10000000)]
# import sys 
# print(sys.getsizeof(a))

# # numpy array use
# a=np.arange(10000000)
# print(sys.getsizeof(a))

# # but numpy array ko reduce kar sakte hai use dtype
# a=np.arange(10000000,dtype=np.int32)
# print(sys.getsizeof(a))

# a=np.arange(10000000,dtype=np.int16)
# print(sys.getsizeof(a))

# a=np.arange(10000000,dtype=np.int8)
# print(sys.getsizeof(a))
 