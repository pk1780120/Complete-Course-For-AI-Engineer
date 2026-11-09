import numpy as np 
# indexing :-given input numpy array hia usme se item/value ko nikalna chahte hia

# normal indexing and slicing
a=np.arange(12).reshape(4,3)
# print(a)
# print(a[1,2])
# # slicing
# print(a[1:3,1:3])

##if i want to print in 2-d array multiple row with like-1 row all elment,2 row all elment,3 row all elment...etc 
#agar koi pattern nhi ban pata hia then use below:-

         ## use:fancy indexing:-

# isme ky hota hia ki square bracket ke andar list pass kar dete hai aur jo bhi index chahie uska position index de dete hai

#print:- 1 row all elment,2 row all elment,3 row all given i/p array
# print(a[[0,2,3]])

a1=np.arange(24).reshape(6,4)
# print(a1)
#print:- 1 row all elment,3 row all elment,4 row,last row all element
# print(a1[[0,2,3,5]])

#print:- 1 clmn all elment,2 clmn all elment,3 clmn all element value
# print(a1[:,[0,2,3]])#: is total row


           #(vvi)  ##boolean indexing:-(numpy,pandas,dataanylytics) when w e perform

# contion ke base par bhi indexing me item  ke position nikalne  ki jarurat pad sakti hai hai like:1.given array me se wah item chahie jo even/odd ho,2. 2 number chahie jo 5 se divisible ho
# is type ke item ko idexing concept ka koi jarurat nhi rahta. sirf logic implement karke through find kiye jata hia isliye bollean indexing use karte hai

#vvi.two(2) numbers ke b/w random integer  generate karke numpy array bana sakte hai kya-(yes)

##boolean indexing
s=np.random.randint(1,100,24).reshape(6,4)
# print(s)

## find all numbers greater than 50
t=s[s>50] #input mask boolean to filter and give correct only value
# print(t)

##find even numbers
r=s[s%2==0]
# print(r)

## find all numbers greater than 50 and even numbers
p=s[(s>50) & (s%2==0)]
# print(p)

## find all numbers not divisible by 7
# o=s[s%7!=0] #or
# o=s[~(s%7==0)]
# print(o)

# divisible by 7
# o=s[s%7==0]
# print(o)



