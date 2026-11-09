import numpy as np

## mathematical function basic

a1=np.random.random((3,3))
a1=np.round(a1*100)
# print(a1)


##max,min,sum,product(prod)

# a=np.sum(a1)
# print(a)
# t=np.min(a1)
# print(t)
# p=np.max(a1)
# print(p)
# s=np.prod(a1) #multply row and clmn
# print(s)

##row=1,clmn=0 for axis
# if each row ka max,min,prod,sum find karn ho to use axis=1

# print(np.max(a1,axis=1))

# if each clmn ka max,min,prod,sum find karn ho to use axis=0
# print(np.min(a1,axis=0))


##statical operation
# mean,median,stanadard(std),varianc(var)
# a=np.mean(a1)
# print(a)
# t=np.median(a1)
# print(t)
# p=np.std(a1)
# print(p)
# s=np.var(a1) #multply row and clmn
# print(s)

# a=np.mean(a1,axis=1)
# print(a)
# t=np.median(a1,axis=0)
# print(t)


##trigonometry function
# print(np.sin(a1))
# print(np.cos(a1))
# print(np.tan(a1))



a2=np.arange(12).reshape(3,4)
a3=np.arange(12,24).reshape(4,3)

##dot product:
# 2 given array ke input par dot product perform hota hai
# condition is first row is equal to 2nd clmn and 2nd row is equal to 1st clmn

# p=np.dot(a2,a3)
# print(p)

##log,exponents
# print(np.log(a1))
# print(np.exp(a1))


##round,floor,ceil
# round:nearest integer par round off kar deta hai
# floor:piche wale integer ko dehta hai
# ceil:aage wala integer ko dekhta hia

# print(np.round(np.random.random((2,3))*100))

# q=np.random.random((2,3))*100
# t=np.round(q)
# print(t)

# p=np.floor(q)
# print(p)

# s=np.ceil(q)
# print(s)
