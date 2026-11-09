import numpy as np
import pandas as pd

from sklearn.impute import SimpleImputer

##m-1:without clmn name
# df1=pd.DataFrame([101,np.nan,102,302,102,np.nan])
# print(df1)
# df2=pd.DataFrame(["amit","ravi",np.nan,"amit","sumit"])
# print(df2)

##m-1:with clmn name
# df1=pd.DataFrame([101,np.nan,102,302,102,np.nan],columns=['marks'])
# print(df1)
# df2=pd.DataFrame(["amit","ravi",np.nan,"amit","sumit"],columns=['name'])
# print(df2) 


##with dictionary clmn name
# d={"marks":[101,np.nan,102,302,102,np.nan]}
# df1=pd.DataFrame(d)
# print(df1)
# dd1={"name":["amit","ravi",np.nan,"amit","sumit"]}
# df2=pd.DataFrame(dd1)


###simpleimputer class function (feature transform type)--2nd type of feature

# d={"marks":[101,np.nan,102,302,102,np.nan]}
# df1=pd.DataFrame(d)
# print(df1)
#how to replace  missing value in numeric data throough mean
# Sm=SimpleImputer(missing_values=np.nan,strategy="mean")
# df1["marks"]=Sm.fit_transform(df1[['marks']])#permanently change data through contant method always works: mean replace missing value 
# print(df1)

##most_frequent use to jo data clmn me jyada baar aaya hai uusse replace ho jaye
# d={"marks":[101,np.nan,102,302,102,np.nan]}
# df2=pd.DataFrame(d)
# Sm=SimpleImputer(missing_values=np.nan,strategy="most_frequent")
# df2["marks"]=Sm.fit_transform(df2[['marks']])
# print(df2)

##median value bich ka value se replace hoga
# d={"marks":[101,np.nan,102,302,102,np.nan]}
# df3=pd.DataFrame(d)
# Sm=SimpleImputer(missing_values=np.nan,strategy="median")
# df3["marks"]=Sm.fit_transform(df3[['marks']])
# print(df3)


# d={"marks":[101,np.nan,102,302,102,np.nan]}
# df4=pd.DataFrame(d)
# Sm=SimpleImputer(missing_values="constant",fill_value=2)
# df4["marks"]=Sm.fit_transform(df4[['marks']])
# print(df4)