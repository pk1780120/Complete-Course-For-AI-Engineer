import numpy as np




A = np.array(range(11))
A
print(A[5])
print(A[5:8])


A = np.array(range(1,11))
print(A+2) #Broadcasting operator


A = np.array(range(1,11))
for i in A :  # Non-indexing loop
    print(i+2)
print(A)


A = np.array(range(1,11))
print(A)
n = len(A)
print(n)
for i in range(n): #Indexing
    A[i]=A[i]+2
print(A)



A = np.array(range(1,11))
for i in A:
    if i%2==0:
      print(i)





a = np.array([10,20,30,40,50,60])
b = a.reshape(2,3,1)
print(b)

c = a.reshape(3,2,1)
print(c)

d=a.reshape(1,2,3)
print(d)

e=a.reshape(1,1,6)
print(e)





A = np.array([[10,20],[30,40]])
for r in A :
    for c in range (len(r)):
        if c==len(r)-1:
            print(r[c],end="")
        else:
            print(r[c],end=",")
    print()


#nditer = number of dimension of iteration 
# ndenumerate = Gives indexing with  value both 

A =np.array([10,20,30,40])
for i in np.nditer(A):
    print(i)


A =np.array([[[10,20,30,40]]])
for i in np.nditer(A):
    print(i)


###
A =np.array([10,20,30,40])  #(0,) this comma refers it is one dimension array
for i,v in np.ndenumerate(A):
    print(i,v)


A =np.array([[[10,20,30,40]]])
for i,v in np.ndenumerate(A):
    print(i,v)


# Flatten --  It Converts multi-dimension into one-dimension (It is call by value)

S = np.array([[[[1,2,3,4,5,6,7,8,9]]]])
print(S.ndim)
p = S.flatten() # Converts multidimension into one-dimension
print(p)
p[5]=60
print(p)
print(S)



S = np.array([[[[1,2,3,4,5,6,7,8,9]]]])
print(S.ndim)
p = S.copy()# Copy as it is data 
print(p)



# Ravel -- It converts mutidimension into one-dimension but works on source (copy refernce)  --- call by refernce 
# It shares the address

S = np.array([[[[1,2,3,4,5,6,7,8,9]]]])
print(S.ndim)
p = S.ravel() # It shares the memory address
print(p)
p[5]=60
print(p)
print(S)
S[0,0,0,1]=30
print(S)
print(p)  # It works on address so whenever we work on any ondex or change the data it also change the source data and the other one also.


A = np.arange(1,11)
print(A)

b = A.reshape(2,5)
print(b)


A = np.arange(1,30,2)
print(A)
B = A.reshape(3,5)
print(B)


A = np.arange(1,30,2)
print(A.reshape(3,5))

B = np.arange(29,0,-2)
print(B.reshape(3,5))


C = np.arange(1,30,2)
D =C[C%5==0]
print(D)

C = np.arange(1,30,2)
D =C[C>14]
print(D)




A = np.array([[10,20,30],[40,50,60]])
B = np.array([[15,28,38],[41,54,65]])
np.concatenate((A,B)) # Here axis=0 (0 represnt row : by default it merged row wise)


A = np.array([[10,20,30],[40,50,60]])
B = np.array([[15,28,38],[41,54,65]])
np.concatenate((A,B),axis=1) #  We can concatenate by two ways either row wise or column wise (1 represent column)


A =np.array([1,2,3,4,5,6,7,8,9])
B = np.split(A,3) # It breaks single array into multiple arrays or parts
print(B)
X = B[0]
Y = B[1]
Z = B[2]
print(X)
print(Y)
print(Z)


X = np.array([[10,20,30],[40,50,60],[70,80,90],[1,2,3]])
print(X)
K = X.T # It transpose rows to column and column to rows 
print(K)

H = np.transpose(X)
print(H)

J = np.array([10,4,2,3,7,6,8])
print(J)
s = np.sort(J) # For ascending order
print(s)
k = np.sort(s)[::-1]
print(k)      # For descending order

J = np.array([10,4,22,3,7,6,8])
p = np.where(J>5) # Where function always return index
print(p)
print(J[p])  # It returns value on index


J = np.array([10,4,22,3,7,6,8])
p = np.where(J%2==0)
print(J[p])

J = np.array([10,4,22,3,7,6,8])
p = np.where(J>5,1,0) 
print(p)


J = np.array([10,4,2,3,7,6])  
X = np.array([100,400,300,700,600,800])
p = np.where(J>5,X,J)  # Here one condition apply (number of elements in array should be same)
print(p)


H = np.array([10,34,78,66,54,77,660])
print(H)
K = np.delete(H,3) # It delets through index 
print(K)
J = np.delete(H,[0,4,5])
print(J)


i = np.delete(h[0:3])
print(i)


A = np.array([20,4,3,1,78,67])
print(A)
K = np.delete(A,4)
print(K)
J = np.delete(A,np.where(A==3))  # Value based delete
print(J)

A = np.array([20,4,3,1,78,67])
K = np.insert(A,2,100)
print(K)


# For 1-D Array
A = np.array([20,4,3,1,78,67])
A = np.insert(A,2,[88,99,66])
print(A)
print(A[4])


#For 2-D Array
J =np.array([[10,20,30]])
print(J)
J= np.insert(J,3,40,axis=1) # For add  column 
print(J)
J= np.insert(J,1,[50,60,70,80],axis=0) # For add  rows
print(J)


A1 = np.array([10,20,30,40])
A2 = np.array([20,3,9,7,30])
J = np.intersect1d(A1,A2)  # It returns common values from the arrays
print(J)


A1 = np.array([10,20,30,40])
A2 = np.array([20,3,9,7,30])
J = np.union1d(A1,A2)  # It returns merge values from the arrays
print(J)


A = np.array([1,2,3,4])
B = np.array([3,4,6,7])
print(np.union1d(A,B)) #Gives all combine value but not repeat the duplicate values
print(np.intersect1d(A,B)) # Gives only common values
print(np.setdiff1d(A,B))  # It gives difference from A to B
print(np.setxor1d(A,B))  #Common cancel and gives others elements
                        #(It works as XOR operation -- Best example for XOR -- Battery
                        # Same value cancel (0) different gives 1)

A = np.array([1,0,4,5,0,9,0,6])
print(np.count_nonzero(A)) # Returns total number of non zero values ( ignores zero )

B = np.array([20,13,20,45,6,13])
print(np.unique(B))  # It only gives unique value and ignores duplicate values and also arrange the values in sorting form


C = np.array([0,0,2,4,3,5,7,8,9,0,0,0])
print(np.trim_zeros(C)) #It removes zero from both sides 
print(np.trim_zeros(C,trim='f')) # It removes zeroes in forward direction
print(np.trim_zeros(C,trim='b')) # It removes zeroes in backward direction


A = np.array([30,43,56,7,8])
print(A)
B = A.copy() # It only copy the value not the address
print(B)


A = np.array([30,43,56,7,8])
print(A)
B = A.view() # It copy the value with address or with its references. If I change the value in B then also changes in A
print(B)
B[2] = 300
print(B)
print(A)
B = np.insert(B,5,1000) 
print(B)
print(A)    # It doesnt impact on A because it had only shares 4 addresses but later if we insert it doesn't impact on source array


A = np.array([1,2,3,4,5])
B = np.array([10,20,30,40,50])
C = np.array([1,1,1,1,1])
for x,y,z in zip(A,B,C): # We can do parallel process or multiple calculation through a single loop without mulitple loop
    print(x+y+z)


A = np.array([1,2,3,4,5])
B = np.array([10,20,30,40,50])
C = np.array([1,1,1,1,1])
for x,y,z in zip(A,B,C): # We can do parallel process or multiple calculation through a single loop without mulitple loop
    print(x*y*z)

# Dot Product 
A = np.array([10,20,30])
B = np.array([2,3,4])
C = np.dot(A,B)
print(C)
print(np.dot(A,B))

#Cross Product 
X = np.array([[[2,3,5],[4,5,6]]])
Y = np.array([[[10,20,30],[40,50,60]]])
Z = np.cross(X,Y)
print(Z)

#Matrix multiplication
A = np.array([[1,2],[3,4]])
B = np.array([[5,6],[7,8]])
print(A@B)


A1 = np.array([[1, 2, 3], 
               [4, 5, 6]])
A2 = np.array([[7, 8], 
               [9, 10], 
               [11, 12]])
result = A1 @ A2
print(result)


X = np.array([2,3,5])
Y = np.array([1,2,3])
print(X@Y)


# ufunction : Universal Functions performs operation on element wise without using loop 
A = np.array([10,20,30,40])
B = np.array([2,4,5,6])
K = np.add(A,B)
print(K)

for i,j in zip(A,B): # By Zip Function 
    print(i+j)


A = np.array([10,20,30,40])
B = np.array([2,4,5,6])
K = np.subtract(A,B)
print(K)


A = np.array([10,20,30,40])
B = np.array([2,4,5,6])
K = np.multiply(A,B)
print(K)


A = np.array([10,20,30,42])
B = np.array([2,4,5,6])
K = np.divide(A,B)
print(K)

A = np.array([2,3,4,5])
B = np.array([2,3,2,1])
K = np.power(A,B)
print(K)

A = np.array([10,20,30,40])
B = np.array([2,4,5,6])
K = np.power(A,B)
print(K)


A = np.array([16,25,100,9])
K = np.sqrt(A)
print(K)


A = np.array([2,3,4,5])
K = np.exp(A)
print(K)
a = 2.718281828
b = a*a
print(b)

A = np.array([2,3,10])
K = np.log(A)
print(K)

A = np.array([2,3,4,5])
K = np.sin(A)
print(K)


A = np.array([15,30,60,90])
K = np.cos(A)
print(K)

A = np.array([2,3,4,5])
K = np.abs(A)
print(K)

A = np.array([2,-3,4,-5])
K = np.abs(A)
print(K)

A = np.array([2,3,4,5])
K = np.mean(A)
print(K)

A = np.array([2,3,4,5])
K = np.mean(A)
print(K)

A = np.array([2,3,4,5])
K = np.median(A)
print(K)

A = np.array([2,3,4,5])
K = np.std(A)
print(K)

A = np.array([2,3,4,5])
K = np.var(A)
print(K)

A = np.array([2,3,4,5])
K = np.min(A)
print(K)

A = np.array([2,3,4,5])
K = np.max(A)
print(K)

A = np.array([2,3,4,5])
K = np.sum(A)
print(K)



A = np.array([10,20])
B = np.array([30,40])
C = np.add(A,B)
print(C)
np.save("first program.npy",C)


J = np.load("first program.npy")
print(J)


A = np.array([10,20])
B = np.array([30,40])
C = np.multiply(A,B)
print(C)


np.savetxt("myfile.txt",C,fmt=("%d"))

h = np.loadtxt('myfile.txt')
print(h)


#Customize Universal Function
# Single input single output
def single(a):
    return(a+10)
#print(type(single)) # Python Function
myfunction = np.frompyfunc(single,1,1) #(Function_name, InputParameter, OutputParameter)
print(type(myfunction))
A = np.array([20,30,40])
J = myfunction(A)
print(J)


#Customize Universal Function
#Two input single output
def double(a,b):
    return a+b 
#print(type(single)) # Python Function
myfunction = np.frompyfunc(double,2,1) #(Function_name, InputParameter, OutputParameter)
print(type(myfunction))
A = np.array([20,30,40])
B = np.array([2,3,4])
J = myfunction(A,B)
print(J)


def two(a,b):
    return a+b , a*b
#print(type(single)) # Python Function
myfunction = np.frompyfunc(two,2,2) #(Function_name, InputParameter, OutputParameter)
print(type(myfunction))
A = np.array([20,30,40])
B = np.array([2,3,4])
i,j = myfunction(A,B)
print(i)
print(j)



A = np.array([10,20,30,40])
B = np.array([1,2,3,4])
print(np.sum(A)) #It takes only single array and its  a normal function
print(np.add(A,B)) #It requires two array to add because it is universal function(ufunc) 


X = np.array([[2,3],[4,5]])
Y = np.array([[3,7],[2,3]])
print(X.shape) #For no.of rows and columns 
print(Y.shape)
print(X@Y)


X = np.array([[2,3,4],[5,6,7]])
Y = np.array([[10,20,2],[30,40,3],[1,2,3]])
X@Y
X1 = np.array([[2,3],[5,6]])
Y1= np.array([[10,20],[30,40],[1,2]])
print(X1.shape)
print(Y1.shape)  # [R1,C1]*[R2,C2] Size of C1 and R1 must be same 
#print(X1@Y1)
#print(X@Y.T)


#1
A = np.array([1,10,2,30,3,9,80,5,60,7,5,80,60])
print(A)
B= A.reshape(1,1,13,1)
print(B)

#2
A=np.array([[3,6,9,12],[15,18,21,24],[27,30,33,36],[39,42,45,48],[51,54,57,60]])
A[1:4:2,0:3:2]

A = np.array([-3,5,-7,2,0,-1])
print(A)
A = np.where(A<0,0,A)
print(A)

#4
A = np.zeros((4,4))
print(A)
A[1:3,1:3]=1
print(A)

#5
A = np.zeros((4,4))
print(A)
A[1:3,1:3]=1
print(A)
B = A.copy()
print(B)
B = np.where(B==0,5,B)
print(B)


A = np.zeros((4,4))
print(A)
A[0:4,0:4]=5
A[1:3,1:3]=1
print(A)


#5
A= np.array([[55, 25, 15],[30, 44, 2],[11, 45, 77]])
B = (A[0,0]+A[1,1]+A[2,2])
print(B)


#or

C = np.trace(A)
print(C)
