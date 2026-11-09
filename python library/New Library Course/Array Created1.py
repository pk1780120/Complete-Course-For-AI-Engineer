import numpy as np 
# by default in numpy provide float value 

# k = [6,8,90,87]
# t = (89,45,34,65)
# A = np.array(k)
# print(type(A))
# B = np.array(t)
# print(type(B))


## normaal method to create array
# A =[10,20,30] #1D
# print(A[2])

# A =[[10,20,30]] #2D
# print(A[0][2])

# A =[[10,20,30],[40,50,60]] # 2 Rows and 3 Columns (2D)
# print(A[1][1])

# A =[[10,20,30],[40,50,60],[70,80,90]] # 3 rows and 3 columns(2D)
# print(A[2][2])

# A= [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
# print(A)

####  numpy  Array create:-
# 1-d to n-dimensions different metthods

##create array 1-d use list
# a=np.array([1,2,3,4]) #vector beacuse 1-row and clmn
# print(type(a))
# print(a) 


##create array 2-d use list
# b=np.array([[1,2,3,4,7],[5,6,7,8,9]]) #matrix rows and clmns
# print(b)


##create array 3-d use list
# c=np.array([[[1,2],[3,4]],[[6,7],[8,9]]])
# print(c)


## dtype all metho to used this
# :- (dtype=__)mean apne pasand ke anusar array create kar sakte hai int,float,bool,complex....etc

# a=np.array([1,2,3,4],dtype=int)
# print(a)
# b=np.array([1,2,3,4],dtype=float)
# print(b)
# c=np.array([1,2,3,4],dtype=bool)
# print(c)
# d=np.array([1,2,3,4],dtype=complex)
# print(d)

##arange
# :-(np.arange) means other method to create array
# like a python loop range  function just like that this function np.arange
# arang ke sath reshape most use when we create array

# a=np.arange(1,11)
# print(a)
# b=np.arange(1,11,2) #start,last ,step(two element b/w difference)
# print(b)#o/p like odd number


##ones and zeros,random (always provide tuple()-it initialize the array)

# np.ones:-all element become 1(use in neural network like-node array create,deep learning to use and create array very fast)
# a=np.ones((3,4))
# print(a)

# c = np.ones(5)
# print(c)


# np.zeroes:-all element become zeros
# b=np.zeros((3,4))
# print(b)


##random number
# it means when we provide range(0-1 b/w) its generate random number b/w range(0-1) 
# a=np.random.random((3,4)) #2-d
# print(a)

# A = np.random.rand(5)  # It gives value only between 0 and 1 for 1-d
# print(A)
# A = np.random.rand(10) # It will return float value between 0 to 1 
# print(A)


##random.randint
# B = np.random.randint(5) # It gives range value between 0 to 5
# print(B)

# C = np.random.randint(2,6) # It gives value between 2 and 6 (Example Ludo dice)-1d
# print(C)

# C = np.random.randint((2,6)) #  In 2-D ,it gives two value (like two ludo palyer)
# print(C)

## random.choice

# G = [4,6,1,9,8]   # It makes/create random value combination from the given input 
# k = np.random.choice(G,3)
# print(k)# attribut or property assign hota hai but function call hota hai isme () ka use hota hai but attribute has not.



##linspace(linearly space
# :-its generate linearly separable points to generate in given range)
# it is given range equal distance me points generate karta hai 
# two point ke b/w distance are same
#in graph plot in machine learning algo to used

# p=np.linspace(-10,10,8)#lower range(start),upper range(end),number of items we wants to generate (like-8)
# print(p)

# D = np.linspace(1,10,2)
# print(D)

# D = np.linspace(1,10,3)
# print(D)

# D = np.linspace(1,10,4)
# print(D)

##identity (identtiy matrics)
# in matrics form only diagonal element is 1 other element  is zero .
# m=np.identity(3)
# print(m)



##eye
#inputmask:-filled with ones on diagonal and zero other place it is used in identity array
e = np.eye((3))#create identtity matrics
print(e)

e[e==0]=2 #2-d array o/p:all element is 2 except daigonal is always
print(e)  

e[e==1]=3
print(e)

# empty()
# Z = np.empty(5) #It gives value beyond 0 and 1
# print(Z)