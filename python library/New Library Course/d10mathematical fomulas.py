import numpy as np 
a=np.arange(10)
# print(np.sum(a))
# print(np.sin(a))

# sigmoid:-range(0-1)
# kitne bhi item ho uske bich  ka value nikal deta hai
# def sigmoid(array):
#     return 1/(1+np.exp(-(array)))
# a=np.arange(10)
# print(sigmoid(a))


# mean-squared error(loss function )-first machine learning algo is leanear regression i.e based loss function(use mean squared  error )
# ye kya karta hia ki jungle  raste dikhane me torch ki tarah  kaam karta hai . 

actual=np.random.randint(1,50,25) #st=1,end=50,total item=25
predicted=np.random.randint(1,50,25)
# print(actual)
# print(predicted)

def mse(actual,predicted):
    return np.mean((actual-predicted)**2)#scalar opration
t=mse(actual,predicted)
# print(t)
# categorical cross entropy
p=np.mean((actual-predicted)**2)
# print(p)





