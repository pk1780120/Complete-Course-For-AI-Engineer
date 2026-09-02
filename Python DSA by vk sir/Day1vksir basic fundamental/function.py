# function why use
# 1.reusable
# 2.time saving
# 3.reduced cost

# types
# 1.user defined
# 2.predefined

# user defined types
# 1.with parameter return value
# 2.with parameter no return value
# 3.without parameter return value
# 4.without parameter no return value

# syntax
# def functionname():
#     statement/code

# 3.without parameter no return value
# when we use :read only mode(only see server to client see.only available in server online raht hai client ko nhi milti hai )
# def show():
#     a=100
#     print(a)
# print(show())

# 3.without parameter  return value
# when we use :read and write only mode(only see server to client see and  store and changes.only available in server online rahta  hai client ko  milti hai )

# def shows():
#     a=100
#     return a
# print(shows())

# k=shows()
# print(k*10)


# with parameter no return value
# parameter(positional argument):single or multiple

# def sums(a,b):
#     print(a+b)
# print(sums(30,50))

# default parameter:always last parameter ko bnaya jata hai
# def sums(a,b=0):
#     print(a+b)
# # print(sums(30))#by default b=0 take and execute
# print(sums(20,40))#override to default
  
# def mult(a,b=1,c=3):
#     print(a*b*c)
# # print(mult(30))
# # print(mult(30,3,2))

# print(mult(2)+100)

# function types->(advancedfunction types:map,reduce,filter),anonomus(lembda),predefined ,userdefinsed

# anonomus(lembda): single line only code execute this lambda function
# my_upr=lambda x:x.upper()
# s="cybrom"
# print(my_upr(s))
# print(s.upper())

# function parameter
# p=[1,2,3,4]
# t=list(map(lambda x:x*x,p))
# print(t)


    
# my_even_odd = lambda x: "even" if (x%2==0) else "odd"
# s = [2, 5, 6, 7, 8]
# for x in s:
#     print(my_even_odd(x)) 

# my_even_odd = lambda x:x%2==0
# print(tuple(filter(my_even_odd,[20,40,3,45]))) #best approach
# print(tuple(map(my_even_odd,[20,40,5,57]))) #not best approach only use in condition if-else


#keywords argument,list comprehension,positional argument
# recursion--3 type 
# tail
# head
# recursive tree

# positional argument:-we pass the value along with parameter in the same orderas defined as the function

# def tp(name,age):
#     print("name",name,"age",age)
# print("pawan",23)
# print(23,"pawan")#repalce because positonal argument

# # now when we dclare positional
# tp(age=12,name="pankaj")


# def show(name):
#     print(name)
# show("soma","meena","gona","rona") #when we run then throw the error because we pass 1 argument and call mutiple values

# def show(name):
    # print(name)
# print(show(["soma","meena","gona","rona"],[23,45,56,78]))

# then when we does  not no when user what is demanding then use "keyword argument"
# when we pass multiclmn  in tuple,list form then we use keyword argument
# 2 types
# range based keyword
# def show(name,age):
#     print(name,age)
# print(show(["soma","meena","gona","rona"],[23,45,56,78]))

# "variable length positional argument" & it  denote  "*argument"
# by default it returns data in tuple format

# def show(*name):
#     print(name)
# show(["soma","meena","gona","rona"],[23,45,56,78],"bhopal",2890082)

#"variable length keyword argument" & it is denoted by "**argument"

# it returns data in dictionary format
# always pass pair 
# def info(**p):
#     print(p)
# info(name="ajay",age=20,city="bhopal")

# both combine uses these 2 types of keywords args(*,**)
# always pass in sequence

# def clg(*r,**info):
#     print(r,info)

# clg([12,34,56,67,89,"hardh"],age=[34,56,78,98,55],city="bhopal") 




  