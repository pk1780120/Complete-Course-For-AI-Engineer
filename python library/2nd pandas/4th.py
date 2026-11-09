import numpy as np
import pandas as pd
import seaborn as sns

import matplotlib.pyplot as plt
# # D={"name":["A","B","C","D","E"],"age":[21,20,None,19,18]}
# d={"day":["1/1/2024","1/2/2024","1/3/2024","1/4/2024","1/5/2024","1/6/2024","1/7/2024","1/8/2024","1/9/2024"],"city":["bhopal","indore","bhopal","bhopal","indore""bhopal","ujjain","ujjain","ujjain"],"weather":["fog","sunny","rainy","fog","sunny","rainy","sunny","rainy","fog"],"temp":[24,32,
# ],"windspeed":[]}
# 24,10
# 32,4,
# 20,18,
# 20,16
# 35,5
# 21,20
# 38,3
# 19,17,

#groupby,joints, merge interview question
#join,concatenate,merge three way to combine the element all but what is difference

# j=df.groupby(df["city"])
# print(j)
# for i,v in j:
#     print(i)#indexing return
#     print(v)#value return
# j.get_group("bhopal")
# j.max()
# j.min()
# j.agg({"temp":"sum","windspeed":"min"})

# df1=pd.DataFrame({'A':[10,20],'B':[30,40]})
# df2=pd.DataFrame({'A':[50,60],'B':[70,80]})
# d1=pd.DataFrame([100,200,300,400])
# d2=pd.DataFrame([500,600,700,800])
# d3=pd.concat([d1,d2])#1D
# print(d3)
# df=pd.concat([df1,df2],ignore_index=True) #jisese 
# print(df)
# df=pd.concat([df1,df2],axis=1)
#axis:1 column & 0 row wise hum vertically and horizontally concate kar sakte hai

#case:1:jaruri nhi ki clmn ka naam same ho
# concat ka drawback -->case:2:
# size same hona jaruri nhi hai yani "none" se replace karega cloumn ke row values


# df=pd.concat([df1,df2],keys=(['school1','school2']))
# print(df)

# merge
 
# print(df1.join(df2,rsuffix="right")) 
# print(df1.join(df2,lsuffix="left")) #  suffix is used to differentiate th clmn name   
# # rule:IN JOIN COLUMN NAME SHOULD BE UNIQUE WHEN TO DIFFERENTIATE TJHE CLMN NAME

# df1=pd.DataFrame({'A':[1,2,3,4],'B':[5,6,7,8]})
# df2=pd.DataFrame({'C':[10,20],'B':[50,60]})
# print(df2.join(df1)) #bydefault it  support left join df2
# print()
# print(df1.join(df2)) #bydefault it  support left join df1
# #now we perform join by default join perform right joins
# print(df2.join(df1,how="right"))
# print(df2.join(df1,how="left"))
# print(df2.join(df1))
# # inner join/equi join:both same data
# # always join index based  thats conclusion
# print(df2.join(df1,how="inner"))

# some imp

# df1=pd.DataFrame({'A':[1,2,3,4],'B':[5,6,7,8]},index=["a","b","c","d"])
# df2=pd.DataFrame({'C':[10,20],'B':[50,60]},index=["c1","d1"])
# print(df1.join(df2)) 



# dg1=pd.DataFrame({'id':[1,2,3,4],'score':[50,60,70,80]})
# dg2=pd.DataFrame({'adhar':[1,2,10,20],'score':[50,65,95,90]})
# print(pd.merge(dg1,dg2,left_on="id",right_on="adhar",how="left"))


df=pd.DataFrame({"NAME":["alice","bob","charlie"],"age":[25,30,35],"city":["ny","la","chicago"]},index=["a","b","c"])
# print(df)

# loc(label-based indexing)
# select using index labels and clmn names
# print(df.loc["c"])

# print(df.loc["b":"c"]) #slicing

# #select row and clmn
# print(df.loc["a","city"])

# # multiple indexing
# print(df.loc[["a","b"]])


# iloc:(integer position-based indexing)
# select using row and clmn positions
# print(df.iloc[0])

# # slicing
# print(df.iloc[0:2,0:2])
