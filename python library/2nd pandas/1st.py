import numpy as np
import pandas as pd
import seaborn as sns

import matplotlib.pyplot as plt
data=sns.get_dataset_names()
# print(data)

# dt=sns.load_dataset('tips')
# print(dt)



# print(dt.isnull()) #return true and false
# print(dt.isnull().sum()) #it return scalr value for each column
# d={"name":["a","b","b",None,"d"],"AGE":[21,None,None,20,19]}
# df=pd.DataFrame(d)
# print(df)
# print(df.isnull())
# print(df.isnull().sum())
# print(df.duplicated())
# print(df.duplicated().sum())
# df=df.rename(columns={"name":"sname"})
# print(df)
# df.rename(columns={"AGE":"ages"},inplace=True)
# print(df)
# df["CITY"]=["bpl","jpl","indr","ujjn","delhi"]
# print(df)

tit=sns.load_dataset('titanic')
# print(tit.shape)
# print(tit.columns)
# print(tit['age'].min())
# print(tit['age'].max())

slab=[0,15,25,35,45,55,85]
lb=["kids","teenegers","young","mid","senior","old"]
tit['age_group']=pd.cut(tit["age"],bins=slab,labels=lb)
print(tit.head())
print(tit['age'].value_counts().plot(kind="pie"))
print(tit['age'].value_counts().plot(kind="bar"))

