import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.preprocessing import StandardScaler,MinMaxScaler
data=pd.read_csv("Kmeanssalry.csv")
print(data) 
st=StandardScaler()
data['income']=st.fit_transform(data[['income']])
data['age']=st.fit_transform(data[['age']])
fg=plt.figure()#without scaling
axis1=fg.add_subplot(111)
data['income'].plot(kind='kde',ax=axis1,color='red')
data['age'].plot(kind='kde',ax=axis1,color='green')
plt.show()

##
# data1=pd.read_csv("Kmeanssalry.csv")
# st=StandardScaler()
# data1[st_income]=st.fit_transform(data[["st_income"]])
# data1[st_age]=st.fit_transform(data[["st_age"]])
# fg1=plt.figure()#with scaling
# axis1=fg1.add_subplot(111)
# data1[st_income].plot(kind='kde',ax=axis1,color='red')
# data1[age].plot(kind='kde',ax=axis1,color='green')