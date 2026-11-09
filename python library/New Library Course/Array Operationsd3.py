import numpy as np 


####operation :numpy array me different operation perform kar sakte hai
# two types of operation:
# 1.scalar operations:single number se operate karna
# 2.vector operations

# a=np.arange(12)
# print(a)
# c=a.reshape(3,4)
# print(c)

# short form
a=np.arange(12).reshape(3,4)
a1=np.arange(12,24).reshape(3,4)

## 1.scalar operations:single number se operate karna

#arithmetic operations
# print(a + 2)#2=scalar and a1=metrics
# print(a-2)
# print(a*2)
# print(a/2)
# print(a//2)
# print(a%2)
# print(a**2)

##relational operations
# print(a>2)
# print(a>=2)
# print(a<2)
# print(a<=2)
# print(a==2)

##vector operation:do numpy array ke upar koi operation perform karte ho

#airthmetic operations(all operators)
# print(a+a1)
# print(a*a1)