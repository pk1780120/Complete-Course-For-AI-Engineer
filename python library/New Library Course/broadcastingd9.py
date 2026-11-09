import numpy as np 
     
     ####broadcasting
#  used-vectorisation technique(numpy is superfast used vectorisation technique )
# :-broadcasting ye btata hia ki numpy do different shape wale arrays ko kaise treat kart hai  while performing airthmetic operations 

# where do you need broadcasting?
#scenario:-
#1. same shape
# a=np.arange(6).reshape(2,3)
# a1=np.arange(6,12).reshape(2,3)
# # print(a)  
# # print(a1)
# print(a+a1)


#different shape
# a=np.arange(6).reshape(2,3)
# a1=np.arange(3).reshape(1,3)
# print(a)  
# print(a1)
# print(a+a1)#possible addition copy then add


    ###question more example of broadcast
# a3=np.arange(12).reshape(4,3)
# print(a3)
# b=np.arange(3).reshape(3)
# print(b)
# print(a3+b) 


# a3=np.arange(12).reshape(3,4)
# # print(a3)
# b=np.arange(3).reshape(3)
# # print(b)
# print(a3+b) #error throw karega because broadcast condition not apply due to different element in dimention


# a3=np.arange(3).reshape(1,3)
# # print(a3)
# b=np.arange(3).reshape(3,1)
# # print(b)
# print(a3+b)


# a3=np.arange(3).reshape(1,3)
# # print(a3)
# b=np.arange(4).reshape(4,1)
# # print(b)
# print(a3+b)

# # shape-->(1,1)
# a=np.array([1])
# print(a)
# # shape-->(2,2)
# a1=np.arange(4).reshape(2,2)
# print(a1)
# print(a+a1)

# a3=np.arange(12).reshape(3,4)
# # print(a3)
# b=np.arange(12).reshape(4,3)
# # print(b)
# print(a3+b)#nhi broadcast hoga

# a3=np.arange(16).reshape(4,4)
# # print(a3)
# b=np.arange(4).reshape(2,2)
# # print(b)
# print(a3+b)#nhi broadcast hoga