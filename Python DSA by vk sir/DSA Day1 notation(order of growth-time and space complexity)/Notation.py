### order of growth

# time complexity   
# space complexity

### asymptotic notation
# we can measure the tc and sc with the help of asymptotic notation. 
# .depent on unit(example:50rs=50$,(size:x,m,xl,xxl))

# 3types
# 1.big O :worst case
# 2.Omega :best case
# 3.theta :avg case 

# best case:sabse achha .it is assending order

# worst case:sabse khrab .it is random order

# avg case :avg.it is desending order

# tc=constant(1):
# search only 1 times because search by index
# def cybrom(n):
#     print(n[0])
# k=[10,54,8,8,9,0]
# cybrom(k)

# example:(32 bit consume addreess)
# t=[2,4,3]
# print(id(t[2]))
# print(id(t[1]))
# print(id(t[3]))

# tc=o(1)
# def cybrom2(n,p):
#     print(n[p])
# j=[2,5,8,9,4]
# p=int(input("enter the index:"))
# cybrom2(j,p)


# linear tc:
# tc=:o(n)
# sc:o(1)

# def fun(n):
#     for i in n: #o(n)
#         i=i+1   #o(n)+o(n)=o(2n)=o(n)
#         print(i)
# k=[14,12,3,54,6,5,7]
# fun(k)

## varible kkoi bhi function me bnate hai to jab variable bnate hai then  constant neglegible-below example
# tc=:o(n)
# sc:o(1)
# def fun(n):
#     a=0
#     for i in n: #o(n)=tc
#         a=a+1   
#         print(a)
# k=[14,12,3,54,6,5,7]
# fun(k)


# jha par variable ko koi array pass karte hai then:
# tc=:o(n)
# sc:o(n)
# def fun(n):
#     a=n
#     for i in a: #o(n)=tc
#         i=i+1   
#     print(i)
# k=[14,12,3,54,6,5,7]
# fun(k)



#   Quadratic tc=0(n^2)
# 2-d,pattern is quadratic tc=o(n^2)  
# jha par nested loop chalegi wha par ,tc=o(n^2)

# tc=o(2n)   
# def joy(n):
#     for i in n:
#         if i%2==0:
#             print(i)
#     for j in n:
#         if j%2!=0:
#             print(j)
# f=[23,10,18,17,5,40]
# joy(f)


# logrithimic tc:drastic change(unexpected)
# tc=logn:when loop ko n times ke liye chalate hai tab hota hai 
# example:
# def joy(n):
#     while n>0:
#         print(n)
#         n//10
# joy(20)

# tc=logn
# def joy(n):
#     while n>0:
#         print(n)
#         n=n-1
# joy(20)

#tc=:o(n)
# def joy(n):
#     m=100
#     while n>0:
#         m=m//10
#         print(n)
#         n=n-1
# joy(120)

# tc=n(linear)
# def sum1(n):
#     total = 0  
#     while n > 0:
#         total=total+n  
#         n=n-1          
#     return total
# m = int(input("enter the number: "))
# result = sum1(m)
# print(result)
 
# tc=0(1)
# def sum1(n):
#     s=n*(n+1)//2
#     return s
# print(sum1(5))

# def show1(n):
#     if n==0:
#         return n
#     return show1(n-1)+n
# print(show1(3))


##
# n=int(input("enter the no:"))
digit=0
# while (n!=0):
    # digit=digit+1
    # n=n//10
# print(f"digit ={digit}")

# tc=logn






  



