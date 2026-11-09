import numpy as np 

##reshape
# ek given numpy array ko dusre  shape me convert kar deta hai
# t=np.arange(1,11).reshape(5,2)#11-5rows and 2 clmn
# print(t)

# p=np.arange(1,11).reshape(2,5)#11-2rows and 5 clmn
# print(p)

a1=np.arange(10)
# print(a1)
a2=np.arange(12).reshape(3,4)
# print(a2)
a3=np.arange(27).reshape(3,3,3)
# print(a3)

##transpose
# row ka clmn and clmn ka row very fast provide

# print(np.transpose(a2))
# print(a2.T)#SHORT REPRESENT

##ravel:kitne bhi n-dimension ke array ko 1-d me convert kar deta hai

# print(a2.ravel())
# print(a3.ravel())

####note:result dikh jaye to temporary array store hota hai if result n dikhe to permanent array hota hai

###stacking:shape same hona chaihie

# if like-[2*2] and [2*2] matrics are given then it can stack two appproach
# 1.horizontal
# 2.vertical
a4=np.arange(12).reshape(3,4)
a5=np.arange(12,24).reshape(3,4)

# # horizontal stack(use tuple)
# t=np.hstack((a4,a5,a4,a5))
# # print(t)

# # vertical stack
# p=np.vstack((a4,a5))
# print(p)

##splitting
# 1.hsplit()
# 2.vsplit()

## hsplit
# t=np.hsplit(a4,2)
# print(t)

# m=np.hsplit(a5,2)
# print(m)


# 2.vsplit()
# t=np.vsplit(a4,3)
# print(t)

# m=np.vsplit(a5,3)
# print(m)