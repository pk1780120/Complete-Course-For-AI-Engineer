import numpy as np
import pandas as pd
import seaborn as sns

import matplotlib.pyplot as plt

# d={"name":["som","piyush","piyush","mohit","raj"],
#       "age":[20,19,19,18,17],
#       "city":["bpl","ujn","ujn","dlhi","jpblr"]}

# df=pd.DataFrame(d)
# print(df)
# print(df['age'].dtype)
# print(df['age'].astype(float))
# df.rename(columns={"age":"ages"},inplace=True)
# # print(df)
# k=df(['age'].between(15,18))
# # print(df[k])
# print(df['age'[k]])
# print(df.duplicated())
# print(df.drop_duplicates(inplace=True))
# print(df)



d={"name":[None,"piyush","pawn",None,"raj"],
      "age":[None,19,None,19,17],
      "city":["bpl","ujn","dlhi",None,"jpblr"]}
df1=pd.DataFrame(d)
# print(df1.duplicated())
# print(df1.drop_duplicates(keep=False))
# print(df1.drop_duplicates(keep="first"))
# print(df1.drop_duplicates(keep="last"))
# print(df1.dropna()) #etire row delete wher he found none
# print(df1.dropna(how="all"))
# print(df1.dropna(thresh=2))
# print(df1.dropna(thresh=3)) 
print(df1['age1'].fillna(value=29)) 