import numpy as np 

###WORKING WITH MISSINNG VALUES-->np.non(miss value)

# a=np.array([1,2,3,4,np.nan,6])
# # print(a)
# # print(a[~np.isnan(a)])

import matplotlib.pyplot as plt
###plotting a 2-d plot
# x=y
x=np.linspace(-10,10,100)
y=x
# t=plt.plot(x,y)
# print(t)
# plt.show()

##always write this command when we plot graph
# plt.plot(x, y)    # graph banao
# plt.show()        # graph dikhao


###plotting a 2-d plot
# y=x^2
# x=np.linspace(-10,10,100)
# y=x**2
# plt.plot(x, y)    # graph banao
# plt.show() # graph dikhao



# ###plotting a 2-d plot
# # y=sinx
# x=np.linspace(-10,10,100)
# y=np.sin(x)
# plt.plot(x, y)    # graph banao
# plt.show() # graph dikhao



# ###plotting a 2-d plot
# # y=logx
# x=np.linspace(-10,10,100)
# y=np.log(x)
# plt.plot(x, y)    # graph banao
# plt.show() # graph dikhao

# ###plotting a 2-d plot
# # y=xlogx
# x=np.linspace(-10,10,100)
# y=x*np.log(x)
# plt.plot(x, y)    # graph banao
# plt.show() # graph dikhao

###plotting a 2-d plot sigmoid graph
x=np.linspace(-10,10,100)
y=1/(1+np.exp(-x))
plt.plot(x, y)    # graph banao
plt.show() # graph dikhao