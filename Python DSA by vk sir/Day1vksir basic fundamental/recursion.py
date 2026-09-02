# recursion:-function call itself is called recursion. 
# draw back-exponential time complexity most of the case

# two condition is known before study problem to solve recursion:-
# 1.base condition 
# 2.recursion relation

# types:4
# 1.tail/head(direct)
# 2.(indirect)
# 3.recursion and recursion tree
# 4.nested recursion

# def check_even_odd(n):
#     if n == 0:
#         return "Even"
#     elif n == 1:
#         return "Odd"
#     elif n < 0:
#         return check_even_odd(-n)
#     return check_even_odd(n - 2)

# num = int(input("Enter a number: "))
# result = check_even_odd(num)
# print(num, "is", result)



# loop vs recursion
# example of tail recursion(descending order program)
# it store in stack i.e LIFO:
# def show(n):
#     if n==0:
#         return
#     print(n)#tail recursion 
#     show(n-1)
# show(5)


# head recursion :it is also known as assending order
# HOLD AND EXECUTE IN STACK

# def show(n):
#     if n==0:
#         return
#     show(n-1)
#     print(n)#head recursion
# show(5)


# wap even and odd
# use head and tail recursion

# def even_odd(n):
#     if n==0:
#         return
#     even(n-1)
#     if n%2==0:
#         print(n)
# even_odd(10) 


# def check_even_odd(n):
#     if n == 0:
#         return "Even"
#     elif n == 1:
#         return "Odd"
#     elif n < 0:
#         return check_even_odd(-n)
#     return check_even_odd(n - 2)

# num = int(input("Enter a number: "))
# result = check_even_odd(num)
# print(num, "is", result)


# use tail recursion in the case even
# def even(s,e):
#     if s==e+1:
#         return
#     if s%2==0:
#         print(s)
#     even(s+1,e)
# s,e =map(int,input("enter start and end range:").split())
# even(s,e)

# head not use: wrong approach
# def even(s,e):
#     if s==e+1:
#         return
#         even(s+1,e)
#     if s%2==0:
#         print(s)
# s,e =map(int,input("enter start and end range : ").split())
# even(s,e)

# def power_head(base, exp):
#     # Base Case
#     if exp == 0:
#         return 1

#     # Recursive Call comes first, multiplication waits for return
#     return base * power_head(base, exp - 1)


# # Example usage:
# print(power_head(2, 5))  # Output: 32
 

# def power_tail(base, exp, accumulator=1):
#     # Base Case
#     if exp == 0:
#         return accumulator

#     # Recursive call is the last action performed
#     return power_tail(base, exp - 1, accumulator * base)


# # Example usage:
# print(power_tail(2, 5))  # Output: 32

# def fib(n):
#     # Base cases
#     if n <= 0:
#         return 0
#     if n == 1:
#         return 1
#     return fib(n - 1) + fib(n - 2)

# print(fib(5))   


### indirect recursion(alternate data transfer or exchange function):function calling into another function is called
# if any function call max:2975(limit test)
# not never use because error comes :give none(null)
# you can stop this program then use other base condtion like-if n==0: then break
 
# def func1(n):
#     if n>0:
#         print("func1",n)
#         func2(n-1)
# def func2(n):
#     if n>0:
#         print("func2",n)
#         func1(n-1)
# print(func1(10))


# nested recursion before read/learn apply function
def func(n):
    if n>100:
        print(n)
        return n-10
    return func(func(n+11))
print(func(99))

# pattern number

# for i in range(1,5):
#     for j in range(1,i+1):
#         print(j,end=" ")
        
#     print()

   

